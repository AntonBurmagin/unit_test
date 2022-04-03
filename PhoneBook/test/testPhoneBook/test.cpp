#include <QtTest>

#include "phonebook.h"
class TestPhoneBook : public QObject {
    Q_OBJECT

   public:
     TestPhoneBook();
     ~TestPhoneBook();
   private slots:
};

TestPhoneBook::TestPhoneBook() {

}

TestPhoneBook::~TestPhoneBook() {

}

QTEST_APPLESS_MAIN(TestPhoneBook)

#include "test.moc"
