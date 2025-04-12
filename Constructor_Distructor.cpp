#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car(string m, int y) : model(m), year(y) {
        cout << "Car Created: " << model << " (" << year << ")" << endl;
    }

    ~Car() {
        cout << "Car Destroyed: " << model << " (" << year << ")" << endl;
    }
};

int main() {
    Car car1("Toyota Corolla", 2020);
    Car car2("Honda Civic", 2022);
    return 0;
}
