#include <iostream>
using namespace std;
class Library
{
protected:
    string libraryName;
public:
    void getLibrary()
    {
        cout << "Enter Library Name: ";
        cin >> libraryName;
    }
    void displayLibrary()
    {
        cout << "Library Name: " << libraryName << endl;
    }
};
class Books : public Library
{
protected:
    string bookName;
    string author;
public:
    void getBook()
    {
        cout << "Enter Book Name: ";
        cin >> bookName;
        cout << "Enter Author Name: ";
        cin >> author;
    }
    void displayBook()
    {
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;
    }
};
class Magazine : public Books
{
private:
    int issueNo;
public:
    void getMagazine()
    {
        cout << "Enter Magazine Issue Number: ";
        cin >> issueNo;
    }
    void displayMagazine()
    {
        cout << "Magazine Issue Number: " << issueNo << endl;
    }
};
int main()
{
    Magazine m;
    m.getLibrary();
    m.getBook();
    m.getMagazine();
    cout << "\n--- Library Details ---" << endl;
    m.displayLibrary();
    m.displayBook();
    m.displayMagazine();
    return 0;
}
