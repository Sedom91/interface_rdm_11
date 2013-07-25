<<<<<<< HEAD
#include <QtGui>
#include "klavishi.h"
#include "handle.h"
#include "multichannel.h"
#include "singlechannel.h"
#include <QObject>
#include <QTextCodec>


#include <QDateTimeEdit>
int main (int argc, char ** argv)
{
QApplication app (argc,argv);
QTextCodec::setCodecForTr( QTextCodec::codecForName("utf8") );
QPalette pal1;
Klavishi klavishi;
pal1.setBrush(klavishi.backgroundRole(),Qt::gray);
klavishi.setPalette(pal1);
klavishi.resize(480,400);
klavishi.show();
return app.exec ();
=======
#include<QtGui>
#include<qtextcodec.h>
#include<QObject>
#include<language_pro.h>
#include <QTranslator>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    Primer primer;
    primer.show();
//    QTranslator translator;
//    translator.load("D:\\RDM-11\\project_rdm_11\\language_primer\\language_primer_ru.qm");
//    app.installTranslator(&translator);
//    QLabel lbl(QObject::tr("Hello"));


    return app.exec();
>>>>>>> 2f89d176d5cb7aee308e2803ce5b310c56a22e98
}
