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
        book.add("Bruce", "Wayne", "888-11-888");
        Record newRec("Burry", "Allen", "123-15-11");
        book.add(newRec);
        QVERIFY2(book.getAll().size()==2, "test add function");
    }
    void testGetAll () {
        PhoneBook book;
        book.add("Bruce", "Wayne", "888-11-888");
        book.add("Burry", "Allen", "123-15-11");
        auto allContacts = book.getAll();
        QVERIFY2(allContacts.size()==2, "test getAll size");
        QVERIFY2(allContacts[0].firstName=="Bruce", "test getAll allContacts[0] name");
        QVERIFY2(allContacts[1].phone=="123-15-11", "test getAll allContacts[1] phone");
    }
    void testFilter () {
        PhoneBook book;
        book.add("Bruce", "Wayne", "888-11-888");
        book.add("Burry", "Allen", "123-15-11");
        auto list = book.filter("11");
        QVERIFY2(list.size()==2, "test filter size");
        QVERIFY2(list[0].firstName=="Bruce", "test filter[0] name");
        QVERIFY2(list[1].phone=="123-15-11", "test filter[1] phone");
        QVERIFY2(book.filter("Anton").size()==0, "test filter with no match");
    }

};

TestPhoneBook::TestPhoneBook() {
}
TestPhoneBook::~TestPhoneBook() {
}



QTEST_APPLESS_MAIN(TestPhoneBook)

#include "test.moc"
