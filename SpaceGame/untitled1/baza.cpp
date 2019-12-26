#include "baza.h"
#include "ui_baza.h"
#include "dialog.h"

Baza::Baza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Baza)
{
    ui->setupUi(this);

        setFixedSize(850,550);

        deleteBtn = new QPushButton(this);  //adding button to UI
        deleteBtn->setStyleSheet(QString::fromUtf8("QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
        "stop: 0 white, stop: 1 red);"
        "border-style: solid;"
        "border-color: black;"
        "border-width: 2px;"
        "border-radius: 10px;}"));
        deleteBtn->setText("Obrisi");
        deleteBtn->setFixedSize(60,30);
        deleteBtn->move(40,330);  //X axis  Y Axis


        insertBtn = new QPushButton(this);
        insertBtn->setStyleSheet(QString::fromUtf8("QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
        "stop: 0 white, stop: 1 aqua);"
        "border-style: solid;"
        "border-color: black;"
        "border-width: 2px;"
        "border-radius: 10px;}"));
        insertBtn->setText("Dodaj");
        insertBtn->setFixedSize(60,30);
        insertBtn->move(102,330);  //X axis  Y Axis


        updateBtn = new QPushButton(this);
        updateBtn->setStyleSheet(QString::fromUtf8("QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
        "stop: 0 white, stop: 1 green);"
        "border-style: solid;"
        "border-color: black;"
        "border-width: 2px;"
        "border-radius: 10px;}"));
        updateBtn->setText("Izmijeni");
        updateBtn->setFixedSize(60,30);
        updateBtn->move(163,330);  //X axis  Y Axis

        IDline = new QLineEdit(this);

        IDline->setFixedSize(100,20);
        IDline->move(10,70);


        nameLine = new QLineEdit(this);

        nameLine->setFixedSize(100,20);
        nameLine->move(10,120);


        surnameLine = new QLineEdit(this);

        surnameLine->setFixedSize(100,20);
        surnameLine->move(10,170);


        numberLine = new QLineEdit(this);

        numberLine->setFixedSize(100,20);
        numberLine->move(10,220);

        pointLine = new QLineEdit(this);
        pointLine->setFixedSize(100,20);
        pointLine->move(10,270);




        table = new QTableView(this);
        table->setFixedSize(600,220);
        table->move(180,68);



        IDlbl = new QLabel(this);
        IDlbl->setText("ID");
        IDlbl->move(113,65);
        IDlbl->show();

        nameLbl = new QLabel(this);
        nameLbl->setText("Ime");
        nameLbl->move(114,115);


        surnameLbl = new QLabel(this);
        surnameLbl->setText("Prezime");
        surnameLbl->move(114,167);


        numLbl = new QLabel(this);
        numLbl->setText("Broj dresa");
        numLbl->move(114,214);

        poeni = new QLabel(this);
        poeni->setText("Poeni");
        poeni->move(114,265);


        connectionLabel = new QLabel(this);
        connectionLabel ->setText("Connected/Not connected");
        connectionLabel->setFixedSize(130,20);
        connectionLabel->move(200,300);


       table->show();




        //uspostava konekcije sa bazom
        Dialog obj;
        if(!obj.conOpen())
        {
            connectionLabel->setText("Not connected");
        }else
        {
            connectionLabel->setText("Connected");
        }


/*singali i slotovi singal clicked i slot koji se poziva kada korisnik klikne na button*/
        connect(insertBtn,SIGNAL(clicked(bool)),this,SLOT(on_btnAdd_clicked()));
        connect(updateBtn,SIGNAL(clicked(bool)),this,SLOT(on_btnEdit_clicked()));
        connect(deleteBtn,SIGNAL(clicked(bool)),this,SLOT(on_btnDelete_clicked()));

        //kada korisnik klikne na polje unutar tabele pozovi sl
       connect(table,SIGNAL(activated(QModelIndex)),this,SLOT(on_table_activated(QModelIndex)));

}

Baza::~Baza()
{
    delete ui;
}

void Baza::refresh()
{

           QSqlQueryModel *modal = new QSqlQueryModel();
           Dialog obj;
           obj.conOpen();
           QSqlQuery *qry = new QSqlQuery(obj.mydb);
           qry->prepare("Select ID,Ime,Prezime,Broj,Poeni,Username,Password from Fudbal");
           qry->exec();
           modal->setQuery(*qry);
           table->setModel(modal);
           obj.conClose();
           qDebug() << (modal->rowCount());
}

void Baza::on_btnAdd_clicked()
{

       QString name = nameLine->text();
       QString surname = surnameLine->text();
       QString  ID = IDline->text();
       QString num = numberLine->text();
       QString point = pointLine->text();

       Dialog obj;
       if(!obj.conOpen())
       {
           qDebug() << "Problem sa konekcijom";
       }

       obj.conOpen();
       QSqlQuery query;
       query.prepare("insert into Fudbal (ID,Ime,Prezime,Broj,Poeni)values('"+ID+"','"+name+"','"+surname+"','"+num+"','"+point+"')");
       if(query.exec())
       {
           QMessageBox::information(this,"Info","Podaci su sacuvani");
           obj.conClose();
       }else
       {
           QMessageBox::critical(this,tr("error::"),query.lastError().text());
       }refresh();
}

void Baza::on_btnEdit_clicked()
{

        QString name = nameLine->text(); //adding text from the line to string
        QString surname = surnameLine->text();
        QString ID = IDline->text();
        QString num = numberLine->text();
        QString points = pointLine->text();

        Dialog obj;
        if(!obj.conOpen())
        {
            qDebug() << "Problem sa konekcijom!";
        }
        obj.conOpen();  //opening connection
        QSqlQuery qry;
        qry.prepare("Update Fudbal set ID='"+ID+"',Ime='"+name+"',Prezime='"+surname+"',Broj='"+num+"',Poeni='"+points+"' where ID='"+ID+"'");
        //query for editing

        if(qry.exec())   //testing query execution
        {
            QMessageBox::information(this,"Info","Podaci su izmijenjeni");
            obj.conClose();  //closing connection after correct editing
        }else
        {
            QMessageBox::critical(this,tr("error::"),qry.lastError().text());
            //convert error to string
        }refresh();
}

void Baza::on_btnDelete_clicked()
{

    QString ID = IDline->text();

         Dialog obj;
         if(!obj.conOpen())
         {
             qDebug()<< "Problem sa konekcijom";

         }
         obj.conOpen();
         QSqlQuery qry;

         QMessageBox::StandardButton reply = QMessageBox::question(this,"Question","Jeste li sigurni",QMessageBox::Yes | QMessageBox::No);
         if(reply==QMessageBox::Yes)  //if the answer on question is yes
         {
          //then prepare query and delete row
         qry.prepare("Delete from Fudbal where ID='"+ID+"'");

         if(qry.exec())
         {
             QMessageBox::information(this,"Info","Podaci su obrisani");
             obj.conClose();

         }else
         {
             QMessageBox::critical(this,tr("error::"),qry.lastError().text());
         }
         }refresh();
}



void Baza::on_table_activated(const QModelIndex &index)
{

    QString val = table->model()->data(index).toString();
          //converting current index field into string
          Dialog obj;
          if(!obj.conOpen())
          {
              qDebug() << "Problem sa konekcijom";
          }
          obj.conOpen();
          QSqlQuery qry;
          qry.prepare("Select * from Fudbal where ID='"+val+"' or Ime='"+val+"' or Prezime='"+val+"' or Broj='"+val+"'");
          if(qry.exec())
          {
              while(qry.next())
              {
                  IDline->setText(qry.value(0).toString());  //adding field number value on line edit through query
                  nameLine->setText(qry.value(1).toString());
                  surnameLine->setText(qry.value(2).toString());
                  numberLine->setText(qry.value(3).toString());
                  pointLine->setText(qry.value(4).toString());
              }obj.conClose();
          }else
          {
              QMessageBox::critical(this,tr("error::"),qry.lastError().text());
          }
}



