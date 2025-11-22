#include "mainqt.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QLocale>


int main(int argc, char *argv[]){
    QLocale locale;
    QString t = locale.name();
    QApplication a(argc, argv);
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "oikonomia_" + QLocale(locale).name();
        if (!t.compare("ja_JP")){
            if (translator.load(":/oikonomia_ja_JP.qm" + baseName)) {
                a.installTranslator(&translator);
                break;
            }
        } else {
            if (translator.load(":oikonomia_ko_KR.qm" + baseName)) {
                a.installTranslator(&translator);
                break;
            }
        }
    }
    mainQT w;
    w.show();
    return a.exec();
}
