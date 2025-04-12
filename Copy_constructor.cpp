#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {
        cout << "Rectangle Created: " << length << " x " << breadth << endl;
    }

    Rectangle(const Rectangle& rect) : length(rect.length), breadth(rect.breadth) {
        cout << "Copy Constructor Called: " << length << " x " << breadth << endl;
    }

    void display() {
        cout << "Rectangle Dimensions: " << length << " x " << breadth << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;
    rect2.display();
    return 0;
}
