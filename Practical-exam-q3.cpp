#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
    string color;
    double area;

public:
    
    void setColor(const string& c) {
        color = c;
    }

    void setArea(double a) {
        area = a;
    }

    
    string getColor() const {
        return color;
    }

    double getArea() const {
        return area;
    }

    virtual void calculateArea() {
        setArea(0);
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        setArea(M_PI * radius * radius);
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculateArea() override {
        setArea(length * width);
    }
};

int main() {
    Circle circle(5.0);
    circle.setColor("Red");
    circle.calculateArea();

    Rectangle rectangle(4.0, 6.0);
    rectangle.setColor("Blue");
    rectangle.calculateArea();

    cout << "Circle - Color: " << circle.getColor()
         << ", Area: " << circle.getArea() << endl;

    cout << "Rectangle - Color: " << rectangle.getColor()
         << ", Area: " << rectangle.getArea() << endl;

    return 0;
}