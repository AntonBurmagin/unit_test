#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#define PHONEBOOK_EXPORT

#include <PhoneBookGlobal.h>
#include <QList>

struct Record {
    QString firstName;
    QString lastName;
    QString phone;
    Record(QString name, QString secName, QString number) : firstName(name), lastName(secName), phone(number){};
};

class PHONEBOOK_EXPORT PhoneBook
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
