#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#define PHONEBOOK_EXPORT

#include <PhoneBook_global.h>
#include <QList>

struct Record {
    QString firstName;
    QString lastName;
    QString phone;
    Record(QString name, QString secName, QString number) : firstName(name), lastName(secName), phone(number){};
};

class PHONEBOOK_EXPORT PhoneBook  // без define PHONEBOOK_EXPORT компилятор считает его названием класса
                                    // и выдает ошибку "variable has incomplete type 'class PHONEBOOK_EXPORT'"
{
public:
    PhoneBook();
    void add(Record toadd);
    void add(QString name, QString secName, QString number);
    QList<Record> getAll();
    QList<Record> filter (QString pattern);
private:
    QList<Record> mData;
};

#endif // PHONEBOOK_H
