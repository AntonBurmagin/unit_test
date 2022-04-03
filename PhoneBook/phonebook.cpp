#include "phonebook.h"

PhoneBook::PhoneBook()
{
}

void PhoneBook::add(Record toadd)
{
    mData.append(toadd);
}

void PhoneBook::add(QString name, QString secName, QString number)
{
    Record rec(name, secName, number);
    mData.append(rec);
}

QList<Record> PhoneBook::getAll()
{
    return mData;
}

QList<Record> PhoneBook::filter(QString pattern)
{
    QList<Record> result;
    for (const auto &current : mData)
        if (current.firstName.contains(pattern) ||
            current.lastName.contains(pattern) ||
            current.phone.contains(pattern))
            result.push_back(current);
    return result;
}
