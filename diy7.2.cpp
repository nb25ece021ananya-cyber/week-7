#include <iostream>
using namespace std;

class Shape {
protected:
    string name;

public:
    Shape() {
        name = "Shape";
        cout << "Shape constructor called" << endl;
    }
};

class Polygon : public Shape {
protected:
    int sides;

public:
    Polygon(int s) {
        sides = s;
        cout << "Polygon constructor called" << endl;
    }
};

class Rectangle : public Polygon {
    int length, breadth;

public:
    Rectangle(int l, int b)
        : Polygon(4) {
        length = l;
        breadth = b;
        cout << "Rectangle constructor called" << endl;
    }

    void display() {
        cout << "Shape: " << name << endl;
        cout << "Sides: " << sides << endl;
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r(10, 5);

    cout << "\nRectangle Details:" << endl;
    r.display();

    return 0;
}