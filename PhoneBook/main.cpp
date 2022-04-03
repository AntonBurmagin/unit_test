#include "phonebook.h"

#include <iostream>

int main()
{

    PhoneBook phoneb;
    phoneb.add("Anton", "Burmagin", "89818285439");
    phoneb.add("Alina", "Shakirova", "89110846447");

    QList<Record> list= phoneb.getAll();
    for (auto x : list)
        std::cout << x.firstName.toStdString() << " " << x.lastName.toStdString() << " " << x.phone.toStdString() << std::endl;

    auto Burm = phoneb.filter("Burm");
    for (auto x : Burm)
        std::cout << x.firstName.toStdString() << " " << x.lastName.toStdString() << " " << x.phone.toStdString() << std::endl;

    auto fewNumbers = phoneb.filter("084");
    for (auto x : fewNumbers)
        std::cout << x.firstName.toStdString() << std::endl;


    return 0;
}
