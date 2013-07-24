#include<QtGui>
#include<qtextcodec.h>
#include<QObject>
#include<language_pro.h>
#include <QTranslator>
Primer::Primer(QWidget*parent)
:QWidget(parent)
{

  translator = new QTranslator;
 button = new QPushButton(QObject::tr("English"));
 button_1 =new QPushButton(tr("Russian"));
connect(button,SIGNAL(clicked()),SLOT(changeLanguage()));
 connect(button_1,SIGNAL(clicked()),SLOT(changeLanguageRuss()));
setWindowTitle(QObject::tr("bkbbbkbk"));
setFixedSize(480,230);
QVBoxLayout * mainlayout = new QVBoxLayout;
mainlayout->addWidget(button);
mainlayout->addWidget(button_1);
setLayout(mainlayout);

}

void Primer ::changeLanguage(){

    translator->load("D:\\RDM-11\\project_rdm_11\\language_primer\\language_primer_ru.qm");
    qApp->installTranslator(translator);

}

void Primer ::changeLanguageRuss(){
    translator->load("D:\\RDM-11\\project_rdm_11\\language_primer\\language_primer_ru.qm");
     qApp->removeTranslator(translator);

}

void Primer :: changeEvent(QEvent * event){
    if (event->type()==QEvent::LanguageChange){
        button->setText(tr("English"));
    }
   // else
     //   Primer::changeEvent(event);
}
