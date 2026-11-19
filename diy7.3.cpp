#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        name = n;
    }
};

class Student : virtual public Person {
public:
    Student() : Person("Anu") {
        cout << "Student constructor called" << endl;
    }
};

class Employee : virtual public Person {
public:
    Employee() : Person("Anu") {
        cout << "Employee constructor called" << endl;
    }
};

class TA : public Student, public Employee {
public:
    TA() : Person("Anu") {
        cout << "TA constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    TA t;
    t.display();

    return 0;
}