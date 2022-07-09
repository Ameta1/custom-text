#ifndef CUSTOMTEXT_H
#define CUSTOMTEXT_H

#include <QObject>

class CustomText : public QObject
{
    Q_OBJECT
public:
    explicit CustomText(QObject *parent = nullptr);
public slots:
    void writeToFile();
};

#endif // CUSTOMTEXT_H
