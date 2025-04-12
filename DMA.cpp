
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(string t, string a) : title(t), author(a) {
        cout << "Book Created: " << title << " by " << author << endl;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }

    ~Book() {
        cout << "Book Destroyed: " << title << " by " << author << endl;
    }
};

int main() {
    Book* bookPtr = new Book("The Great Gatsby", "F. Scott Fitzgerald");
    bookPtr->display();
    delete bookPtr;
    return 0;
}
