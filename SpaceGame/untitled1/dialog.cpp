#include "dialog.h"
#include "ui_dialog.h"
#include "baza.h"
#include "prikaz.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

       setFixedSize(400,400);  //fixna velicina dialoga

       userLabel = new QLabel(this); //kreiranje labele
       userLabel->setText("Username"); //postavljanje texta
       userLabel->setFixedSize(100,20); //postavljanje fixne duzine
       userLabel->move(100,180); //pozicioniranje untar prozora

       passLabel = new QLabel(this);
       passLabel->setText("Password");
       passLabel->setFixedSize(100,20);
       passLabel->move(100,210);

       userTxt = new QLineEdit(this);
       userTxt->setFixedSize(100,20);
       userTxt->move(150,180);


       passTxt = new QLineEdit(this);
       passTxt->setEchoMode(QLineEdit::Password);  //creating password field ****
       passTxt->setFixedSize(100,20);
       passTxt->move(150,210);

       confirm = new QPushButton(this);
       confirm->setStyleSheet(QString::fromUtf8("QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
       "stop: 0 white, stop: 1 white);"
       "border-style: solid;"
       "border-color: black;"
       "border-width: 2px;"
       "border-radius: 10px;}"));
       confirm->setText("Baza");
       confirm->setFixedSize(100,20);
       confirm->move(150,240);
       confirm->setDisabled(true); //polja kod pokretanja programa su prazna pa je nas button iskljucen

       checkLabel = new QLabel(this);
       checkLabel->setText(".");
       checkLabel->setFixedSize(100,20);
       checkLabel->move(150,280);

       prikazTerena = new QPushButton(this);
       prikazTerena->setStyleSheet(QString::fromUtf8("QPushButton{background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
       "stop: 0 white, stop: 1 pink);"
       "border-style: solid;"
       "border-color: black;"
       "border-width: 2px;"
       "border-radius: 10px;}"));
       prikazTerena->setText("Prikaz");
       prikazTerena->setFixedSize(100,20);
       prikazTerena->move(150,260);
       prikazTerena->setDisabled(true);

       //provjera da li konekcija postoji

       if(!conOpen()){
                checkLabel->setText("Not connected");

            }else{
               checkLabel->setText("Connected");

            }


       //signali i slotovi za ukljucivanje odnosno iskljucivanje buttona
       QObject::connect(passTxt, &QLineEdit::textChanged, [=]()->void{ check();});
       QObject::connect(userTxt, &QLineEdit::textChanged, [=]()->void{ check();});




       //kada korisnik klikne na dugme za potvrdu emituje se signal i poziva se slot
       connect(confirm,SIGNAL(clicked()),this,SLOT(on_buttonConfirm_clicked()));
       connect(prikazTerena,SIGNAL(clicked()),this,SLOT(on_PrikazTerena_clicked()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::conClose()
{

    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

//kod za otvaranje konekcije sa bazom unutar njeg imamo relativni path sto znaci baza se moze konektovati na svakom racunaru
//radimo sa SQLITE bazom
bool Dialog::conOpen()
{

    mydb= QSqlDatabase::addDatabase("QSQLITE");
                   //relative path
                   mydb.setDatabaseName("../untitled1/Sport.db");

                   if(!mydb.open()){
                       qDebug() << "Not Connected";
                       return false;
                   }else{
                       qDebug() << "Connected";
                       return true;
                   }
}

void Dialog::check()
{

    QString user = userTxt->text(); //uzmi trenutne vrijednosti sa polja za text
      QString pass = passTxt->text(); //uzmi vrijednost za password

          if(!conOpen()){
              qDebug() << "Error on connection";
          }

          conOpen();  //opening connection

          QSqlQuery qry;

          qry.prepare("Select * from Fudbal where Username='"+user+"' and Password='"+pass+"'");
          if(qry.exec()){

              int count=0;
              while(qry.next()){
                  count++;
              }
              if(count == 1){
                  QMessageBox::information(this,"Info","Korisnicko ime i lozinka su tacni");

                 conClose();
                 /*otkljucaj dugme nakon sto su korisnicko ime i lozinka tacni*/
                 confirm->setDisabled(passTxt->text().isEmpty() || userTxt->text().isEmpty());
                 prikazTerena->setDisabled(passTxt->text().isEmpty() || userTxt->text().isEmpty());



              }if(count > 1){
                 qDebug() << "Duplikat!!!";

              }if(count < 1){
                 qDebug() << "Pogresan input" ;
              }

          }else{

              qDebug() << qry.lastError().text();
          }
}

void Dialog::on_buttonConfirm_clicked()
{

          Baza *obj = new Baza();
           this->hide();
           obj->show();

}

void Dialog::on_PrikazTerena_clicked()
{

    Prikaz *obj = new Prikaz();
    this->hide();
    obj->show();
}
