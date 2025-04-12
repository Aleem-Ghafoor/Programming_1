#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;

public:
    Person(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Person Created: " << name << endl;
    }

    Person(const Person& p) {
        name = p.name; // Shallow copy
        cout << "Shallow Copy Created: " << name << endl;
    }

    Person& operator=(const Person& p) {
        if (this != &p) {
            delete[] name;
            name = new char[strlen(p.name) + 1];
            strcpy(name, p.name); // Deep copy
        }
        cout << "Deep Copy Assigned: " << name << endl;
        return *this;
    }

    void display() {
        cout << "Person Name: " << name << endl;
    }

    ~Person() {
        cout << "Person Destroyed: " << name << endl;
        delete[] name;
    }
};

int main() {
    Person p1("Alice");
    Person p2 = p1; // Shallow copy
    p2.display();
    
    Person p3("Bob");
    p3 = p1; // Deep copy
    p3.display();
    
    return 0;
}
