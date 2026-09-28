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
private:
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
        displayLibrary();
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;
    }
};

class Magazine : public Library
{
private:
    string magazineName;
    int issueNo;

public:
    void getMagazine()
    {
        cout << "Enter Magazine Name: ";
        cin >> magazineName;

        cout << "Enter Issue Number: ";
        cin >> issueNo;
    }

    void displayMagazine()
    {
        displayLibrary();
        cout << "Magazine Name: " << magazineName << endl;
        cout << "Issue Number: " << issueNo << endl;
    }
};

int main()
{
    Books b;
    Magazine m;

    cout << "--- Enter Book Details ---" << endl;
    b.getLibrary();
    b.getBook();

    cout << "\n--- Enter Magazine Details ---" << endl;
    m.getLibrary();
    m.getMagazine();

    cout << "\n--- Book Details ---" << endl;
    b.displayBook();

    cout << "\n--- Magazine Details ---" << endl;
    m.displayMagazine();

    return 0;
}
