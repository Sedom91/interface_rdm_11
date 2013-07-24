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
}
