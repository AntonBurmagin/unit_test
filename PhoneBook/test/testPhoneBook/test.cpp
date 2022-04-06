#include <QtTest>
#include <phonebook.h>

class TestPhoneBook : public QObject {
    Q_OBJECT

   public:
     TestPhoneBook();
     ~TestPhoneBook();
   private slots:
     void testAdd() {
         PhoneBook book;
         book.add(Record("Bruce", "Wayne", "888-11-888"));
         QVERIFY2(book.getAll().size()==1, "test add function");
     }
};



QTEST_APPLESS_MAIN(TestPhoneBook)

#include "test.moc"
