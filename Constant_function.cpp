#include <iostream>
using namespace std;

class Employee {
private:
    static int employeeCount;
    const double salary;
    int employeeID;

public:
    Employee(int id, double sal) : employeeID(id), salary(sal) {
        employeeCount++;
        cout << "Employee Object Address: " << this << endl;
        cout << "Employee ID: " << employeeID << ", Salary: " << salary << endl;
    }

    static void showEmployeeCount() {
        cout << "Total Employees: " << employeeCount << endl;
    }
};

int Employee::employeeCount = 0;

int main() {
    Employee e1(101, 50000.0);
    Employee e2(102, 60000.0);
    Employee e3(103, 55000.0);
    Employee::showEmployeeCount();
    return 0;
}
