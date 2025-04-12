#include <iostream>
using namespace std;

class Employee {
private:
    static int employeeCount;

public:
    Employee() {
        employeeCount++;
    }

    static void showEmployeeCount() {
        cout << "Total Employees: " << employeeCount << endl;
    }
};

int Employee::employeeCount = 0;

int main() {
    Employee e1, e2, e3;
    Employee::showEmployeeCount();
    return 0;
}