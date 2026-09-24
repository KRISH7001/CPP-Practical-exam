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

    
    virtual void displayDetails() const {
        cout << "Shape - Color: " << color << ", Area: " << area << endl;
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

    void displayDetails() const override {
        cout << "Circle - Color: " << getColor()
             << ", Radius: " << radius
             << ", Area: " << getArea() << endl;
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

    void displayDetails() const override {
        cout << "Rectangle - Color: " << getColor()
             << ", Length: " << length << ", Width: " << width
             << ", Area: " << getArea() << endl;
    }
};

int main() {
    Circle circle(5.0);
    circle.setColor("Red");
    circle.calculateArea();

    Rectangle rectangle(4.0, 6.0);
    rectangle.setColor("Blue");
    rectangle.calculateArea();

    const int NUM_SHAPES = 2;
    Shape* shapes[NUM_SHAPES];
    shapes[0] = &circle;
    shapes[1] = &rectangle;

    for (int i = 0; i < NUM_SHAPES; i++) {
        shapes[i]->displayDetails();
    }

    return 0;
}