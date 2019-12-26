#include "prikaz.h"
#include "ui_prikaz.h"

#include <QComboBox>
#include <QStyle>

Prikaz::Prikaz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prikaz)
{
    ui->setupUi(this);

    setFixedSize(1250,700);



       igrac1 = new QLabel(this);




       //slike
       QPixmap pix(":/resc/celzi.gif");
       QPixmap pix2(":/resc/manutd.png");


       //postavljanje slike na labelu
       igrac1->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));

       igrac1->move(50,260);


       //dodavanje comboboxa
       player1 = new QComboBox(this);
       player1->setStyleSheet(QString::fromUtf8("QComboBox{background-color: green;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));

       player1->setFixedSize(100,20);
       player1->move(50,240);

       player2 = new QComboBox(this);
       player2->setStyleSheet(QString::fromUtf8("QComboBox{background-color: red;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));

       player2->setFixedSize(100,20);
       player2->move(250,240);

       player3 = new QComboBox(this);

       player3->setStyleSheet(QString::fromUtf8("QComboBox{background-color: orange;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));
       player3->setFixedSize(100,20);
       player3->move(450,240);

       player4 = new QComboBox(this);

       player4->setStyleSheet(QString::fromUtf8("QComboBox{background-color: gray;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));
       player4->setFixedSize(100,20);
       player4->move(450,50);

       player5 = new QComboBox(this);
       player5->setStyleSheet(QString::fromUtf8("QComboBox{background-color: blue;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));

       player5->setFixedSize(100,20);
       player5->move(450,420);


       player6 = new QComboBox(this);
       player6->setStyleSheet(QString::fromUtf8("QComboBox{background-color: purple;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));

       player6->setFixedSize(100,20);
       player6->move(700,400);

       player7 = new QComboBox(this);
       player7->setStyleSheet(QString::fromUtf8("QComboBox{background-color: pink;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));

       player7->setFixedSize(100,20);
       player7->move(700,230);

       player8 = new QComboBox(this);
       player8->setStyleSheet(QString::fromUtf8("QComboBox{background-color: red;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));

       player8->setFixedSize(100,20);
       player8->move(700,50);

       player9 = new QComboBox(this);
       player9->setStyleSheet(QString::fromUtf8("QComboBox{background-color: aqua;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));

       player9->setFixedSize(100,20);
       player9->move(900,200);

       player10 = new QComboBox(this);



       player10->setStyleSheet(QString::fromUtf8("QComboBox{background-color: yellow;"

       "border-style: solid;"
       "border-color: black;"
       "border-width: 1px;"
       "border-radius: 10px;}"));





       player10->setFixedSize(100,20);


       player10->move(1130,300);








       //dodavanje labela  sa slikom dresa

       igrac2 = new QLabel(this);
       igrac2->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
       igrac2->move(250,260);

       igrac3 = new QLabel(this);
       igrac3->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
       igrac3->move(450,260);

       igrac4 = new QLabel(this);
       igrac4->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
       igrac4->move(450,70);

       igrac5 = new QLabel(this);
       igrac5->setPixmap(pix.scaled(150,150,Qt::KeepAspectRatio));
       igrac5->move(450,440);



       igrac6 = new QLabel(this);
       igrac6->setPixmap(pix2.scaled(170,160,Qt::KeepAspectRatio));
       igrac6->move(700,420);


       igrac7 = new QLabel(this);
       igrac7->setPixmap(pix2.scaled(170,160,Qt::KeepAspectRatio));
       igrac7->move(700,250);


       igrac8 = new QLabel(this);
       igrac8->setPixmap(pix2.scaled(170,160,Qt::KeepAspectRatio));
       igrac8->move(700,70);

       igrac9 = new QLabel(this);
       igrac9->setPixmap(pix2.scaled(170,160,Qt::KeepAspectRatio));
       igrac9->move(900,220);

       igrac10 = new QLabel(this);
       igrac10->setPixmap(pix2.scaled(170,160,Qt::KeepAspectRatio));
       igrac10->move(1130,320);

       //line edit imena igraca

       poen1 = new QLineEdit(this);
       poen1->setFixedSize(60,20);
       poen1->move(85,300);

       poen2 = new QLineEdit(this);
       poen2->setFixedSize(60,20);
       poen2->move(290,280);




       poen4 = new QLineEdit(this);
       poen4->setFixedSize(60,20);
       poen4->move(490,100);

       poen3 = new QLineEdit(this);
       poen3->setFixedSize(60,20);
       poen3->move(490,280);

       poen5 = new QLineEdit(this);
       poen5->setFixedSize(60,20);
       poen5->move(490,460);


       poen6 = new QLineEdit(this);
       poen6->setFixedSize(60,20);
       poen6->move(745,440);

       poen7 = new QLineEdit(this);
       poen7->setFixedSize(60,20);
       poen7->move(740,280);

       poen8 = new QLineEdit(this);
       poen8->setFixedSize(60,20);
       poen8->move(745,90);

       poen9 = new QLineEdit(this);
       poen9->setFixedSize(60,20);
       poen9->move(945,240);

       poen10 = new QLineEdit(this);
       poen10->setFixedSize(60,20);
       poen10->move(1180,340);

       //brojevi igraca

       broj1 = new QLineEdit(this);
       broj1->setFixedSize(30,20);
       broj1->move(110,330);

       broj2 = new QLineEdit(this);
       broj2->setFixedSize(30,20);
       broj2->move(310,330);

       broj3 = new QLineEdit(this);
       broj3->setFixedSize(30,20);
       broj3->move(510,310);

       broj4 = new QLineEdit(this);
       broj4->setFixedSize(30,20);
       broj4->move(510,130);

       broj5 = new QLineEdit(this);
       broj5->setFixedSize(30,20);
       broj5->move(510,490);

       broj6 = new QLineEdit(this);
       broj6->setFixedSize(30,20);
       broj6->move(765,470);

       broj7 = new QLineEdit(this);
       broj7->setFixedSize(30,20);
       broj7->move(760,320);

       broj8 = new QLineEdit(this);
       broj8->setFixedSize(30,20);
       broj8->move(765,130);

       broj9 = new QLineEdit(this);
       broj9->setFixedSize(30,20);
       broj9->move(965,270);

       broj10 = new QLineEdit(this);
       broj10->setFixedSize(30,20);
       broj10->move(1200,370);

       updateAll = new QPushButton(this);
       updateAll->setFixedSize(100,20);
       updateAll->setStyleSheet(QString::fromUtf8("QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
       "stop: 0 white, stop: 1 red);"
       "border-style: solid;"
       "border-color: black;"
       "border-width: 2px;"
       "border-radius: 10px;}"));


       updateAll->setText("promijeni");
       updateAll->move(20,20);




 //zelimo stalnu konekciju sa bazom
       Dialog obj;
          if(!obj.conOpen())
          {
              qDebug() << "Niste konektovani ste sa bazom";
          }else
          {
              qDebug() << "Konektovatni ste sa bazom";
          }



             ucitaj(); //ucitavanje igraca u boxove iz baze prilikom pokretanja programa isto vazi i za liniju ispod kod ucitavanja dresova

             ucitajDres(player1,broj1);
             ucitajDres(player2,broj2);
             ucitajDres(player3,broj3);
             ucitajDres(player4,broj4);
             ucitajDres(player5,broj5);
             ucitajDres(player6,broj6);
             ucitajDres(player7,broj7);
             ucitajDres(player8,broj8);
             ucitajDres(player9,broj9);
             ucitajDres(player10,broj10);

             connect(updateAll,SIGNAL(clicked()),this,SLOT(on_Update_all_clicked()));


             //singali slotovi koji reaguju na promjenu indexa kod comboboxa
             //reaguju na signal currentIndexChanged i poziva se slot helperSlot

             connect(player1,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
              connect(player2,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
               connect(player3,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
                connect(player4,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
                 connect(player5,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
                  connect(player6,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
                   connect(player7,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
                    connect(player8,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
                     connect(player9,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));
                      connect(player10,SIGNAL(currentIndexChanged(const QString&)),this,SLOT(helperSlot()));






}

Prikaz::~Prikaz()
{
    delete ui;
}

//imamo 10 igraca i ovdje je cisti primjer MVC-a model view controller
//imamo model na koje postavljamo podatke i te podatke ne vidimo ali ni model
//da bi vidili moramo postaviti na view to jest neki widget
void Prikaz::ucitaj()
{
        QSqlQueryModel *modal = new QSqlQueryModel();


        Dialog obj;
        obj.conOpen();
        QSqlQuery *qry = new QSqlQuery(obj.mydb);


         qry->prepare("Select Ime from Fudbal");  //selektuj kolonu ime
         qry->exec();


         modal->setQuery(*qry);  //postavi rezultate na modal
         player1->setModel(modal);  //ucini podatke vidljivim

         player2->setModel(modal); //postavi na sl box
         player2->setCurrentIndex(2); //ne zelimo da imamo iste igrace na prvom mjestu zato mijenjamo index

         player3->setModel(modal);
         player3->setCurrentIndex(3);

         player4->setModel(modal);
         player4->setCurrentIndex(4);

         player5->setModel(modal);
         player5->setCurrentIndex(5);

         player6->setModel(modal);
         player6->setCurrentIndex(6);

         player7->setModel(modal);
         player7->setCurrentIndex(7);

         player8->setModel(modal);
         player8->setCurrentIndex(8);

         player9->setModel(modal);
         player9->setCurrentIndex(9);

         player10->setModel(modal);
         player10->setCurrentIndex(10);





        obj.conClose();


        qDebug() << (modal->rowCount());
}
//ovo pozivamo unutar konstuktora saljemo box i lineEdit za dres kao ulazni parametar
void Prikaz::ucitajDres(QComboBox *box,QLineEdit *edit1)
{

    QString name = box->currentText();  //uzimanje trenutnog texta sa boxa i spremanje u string
    Dialog obj;
    if(!obj.conOpen())  //us  slucaju da dodje do prekida konkcije obavijesti nas o tome
    {
        qDebug() << "Neuspjesno otvaranje baze";
        return;
    }

    obj.conOpen(); //izvrsava se samo ako je prekid konekcije
    QSqlQuery qry;
    qry.prepare("Select * from Fudbal where Ime='"+name+"'"); //uzmi sve vrijednosti iz baze jednake vrijednosti trenutnog texa na boxu
    if(qry.exec())
    {
        while(qry.next())
        {



            edit1->setText(qry.value(3).toString());  //na polje postavi novi broj dresa

            }
        obj.conClose();
    }else
    {
        QMessageBox::critical(this,tr("error"),qry.lastError().text());

    }
}
//crtanje terena
void Prikaz::paintEvent(QPaintEvent *e)
{
    QPainter *painter = new QPainter(this);

    QRect rect(0,0,1350,700);

    QBrush brush(Qt::green);
    QPen pen(Qt::white);

    painter->setPen(pen);
    painter->setBrush(brush);
    painter->drawRect(rect);

    pen.setWidth(6);

    painter->setPen(pen);
    painter->drawLine(675,0,675,700);

    QRect circle(630,315,100,100);
    painter->setPen(pen);
    painter->drawEllipse(circle);

    painter->drawLine(675,315,675,420);


    QRect leftRect(0,210,200,350);

    painter->drawRect(leftRect);

    QRect rightRect(1152,210,200,350);

    painter->drawRect(rightRect);

    painter->drawArc( QRect( 150, 319, 90, 105 ), -75*18, 135*19 );

    painter->drawArc( QRect( 1110, 319, 90, 105 ), 75*21, 135*19 );
}

/*kada korisnik klikne na dugme update tada se kreira 2 vektora jedan smijesta poene drugi imena*/
void Prikaz::on_Update_all_clicked()
{
        Dialog obj;

        int num=0;
        int sum=0;
        int id =0;





        QVector <QString> imena;
        QVector <QString> brojevi;

        brojevi.push_back(poen1->text()); //spremanje trenutnog imena sa boxa u vektor
        brojevi.push_back(poen2->text());
        brojevi.push_back(poen3->text());
        brojevi.push_back(poen4->text());
        brojevi.push_back(poen5->text());
        brojevi.push_back(poen6->text());
        brojevi.push_back(poen7->text());
        brojevi.push_back(poen8->text());
        brojevi.push_back(poen9->text());
        brojevi.push_back(poen10->text());


       imena.push_back(player1->currentText());
       imena.push_back(player2->currentText());
       imena.push_back(player3->currentText());
       imena.push_back(player4->currentText());
       imena.push_back(player5->currentText());
       imena.push_back(player6->currentText());
       imena.push_back(player7->currentText());
       imena.push_back(player8->currentText());
       imena.push_back(player9->currentText());
       imena.push_back(player10->currentText());

       for(int i=0; i<imena.size();i++) //prolazimo 10x jer imamo 10 igraca
       {
           qDebug() << imena[i];
       }

           obj.conOpen();
           QSqlQuery qry;

           for(int i=0;i<10;i++)
           {
               qry.prepare("Select * from Fudbal where Ime='"+imena[i]+"'"); //vrsimo upit selektujemo sve gdje je ime jednako elementu vektora sa indexom i

               if(qry.exec())
               {
                   QString helper2;
                   while(qry.next())
                       {

                      //kod unutar while petlje uzima trenutnu vrijednost iz baze i sabira je sa novom

                       QString helper = qry.value(4).toString();
                       num = helper.toInt();
                       helper = brojevi[i];
                       sum = helper.toInt();
                       sum+=num;
                       qDebug() << sum;


                      helper2 = QString::number(sum);

                     //baza se updateuje
                   } qry.prepare("Update Fudbal set Poeni='"+helper2+"' where Ime='"+imena[i]+"'");
                   if(qry.exec())   //testing query execution
                   {

                       qDebug() << "Podaci su izmijenjeni";

                   }else
                   {
                       QMessageBox::critical(this,tr("error::"),qry.lastError().text());
                       qDebug() << "Podaci su izmijenjeni";
                       //convert error to string
                   }


               }else
               {
                   QMessageBox::critical(this,tr("error"),qry.lastError().text());

               }
           }
}

/*Pomocni slot koji se poziva kada korisnik promijenit comobobox
Ucita se novo ime i broj dresa*/

void Prikaz::helperSlot()
{
    ucitajDres(player1,broj1);
    ucitajDres(player2,broj2);
    ucitajDres(player3,broj3);
    ucitajDres(player4,broj4);
    ucitajDres(player5,broj5);
    ucitajDres(player6,broj6);
    ucitajDres(player7,broj7);
    ucitajDres(player8,broj8);
    ucitajDres(player9,broj9);
    ucitajDres(player10,broj10);
}


