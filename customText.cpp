#include "customText.h"
#include <QFile>
#include <QDir>
CustomText::CustomText(QObject *parent)
    : QObject{parent}
{

}

void CustomText::writeToFile()
{
    QFile textFile(QDir::homePath() + "/text.txt"); // файл сохранится в домашней директории пользователя
    if (!textFile.exists()) {
        textFile.open(QIODevice::WriteOnly);
        textFile.write("Миру мир!");
        textFile.close();
    }
}
