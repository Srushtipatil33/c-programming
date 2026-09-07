#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string books[5];
    bool issued[5];

public:

    // Constructor
    Library()
    {
        books[0] = "C++ Programming";
        books[1] = "Java Programming";
        books[2] = "Python Programming";
        books[3] = "Data Structures";
        books[4] = "Operating Systems";

        // Initially all books are available
        for (int i = 0; i < 5; i++)
        {
            issued[i] = false;
        }
    }

    // Display books
    void displayBooks()
    {
        cout << "\n----- BOOKS -----\n";

        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ". " << books[i];

            if (issued[i])
                cout << " - Issued";
            else
                cout << " - Available";

            cout << endl;
        }
    }

    // Issue book
    void issueBook()
    {
        int n;

        cout << "Enter book number to issue: ";
        cin >> n;

        if (n < 1 || n > 5)
        {
            cout << "Invalid book number!" << endl;
        }
        else if (issued[n - 1])
        {
            cout << "Book is already issued!" << endl;
        }
        else
        {
            issued[n - 1] = true;
            cout << "Book issued successfully!" << endl;
        }
    }

    // Return book
    void returnBook()
    {
        int n;

        cout << "Enter book number to return: ";
        cin >> n;

        if (n < 1 || n > 5)
        {
            cout << "Invalid book number!" << endl;
        }
        else if (!issued[n - 1])
        {
            cout << "Book is already available!" << endl;
        }
        else
        {
            issued[n - 1] = false;
            cout << "Book returned successfully!" << endl;
        }
    }
};

int main()
{
    // Object created -> constructor automatically called
    Library lib;

    int choice;

    while (true)
    {
        cout << "\n===== LIBRARY MENU =====\n";
        cout << "1. Display Books\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            lib.displayBooks();
        }
        else if (choice == 2)
        {
            lib.issueBook();
        }
        else if (choice == 3)
        {
            lib.returnBook();
        }
        else if (choice == 4)
        {
            cout << "Thank you!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
