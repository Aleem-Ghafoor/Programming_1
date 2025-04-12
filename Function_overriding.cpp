#include <iostream>
using namespace std;

class Vehicle {
public:
    void startEngine() {
        cout << "Vehicle engine starting..." << endl;
    }
};

class Airplane : public Vehicle {
public:
    void startEngine() {
        cout << "Airplane engine roaring to life..." << endl;
    }
};

int main() {
    Vehicle v;
    Airplane a;
    
    cout << "Vehicle Action:" << endl;
    v.startEngine();
    
    cout << "\nAirplane Action:" << endl;
    a.startEngine();
    
    return 0;
}
