Q10:
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    char grade;

public:
    Student(string n, int a, char g) : Person(n, a), grade(g) {}

    void displayStudent() {
        displayPerson();
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s("John Doe", 20, 'A');
    cout << "Student Details:" << endl;
    s.displayStudent();
    return 0;
}