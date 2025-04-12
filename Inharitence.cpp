#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    void display() {
        cout << "Employee Name: " << name << "\nID: " << id << "\nSalary: " << salary << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int i, double s, string d) : Employee(n, i, s), department(d) {}

    void display() {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Employee emp("Alice", 101, 50000);
    Manager mgr("Bob", 102, 70000, "IT");
    
    cout << "\nEmployee Details:" << endl;
    emp.display();
    
    cout << "\nManager Details:" << endl;
    mgr.display();
    
    return 0;
}
