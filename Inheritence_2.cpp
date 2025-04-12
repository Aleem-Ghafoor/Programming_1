#include <iostream>
using namespace std;

class Shape {
private:
    double area;

protected:
    void calculateArea(double value) {
        area = value;
    }

public:
    void displayArea() {
        cout << "Area: " << area << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {
        calculateArea(3.14159 * radius * radius);
    }
};

int main() {
    Circle c(5.0);
    cout << "Circle Details:" << endl;
    c.displayArea();
    return 0;
}
