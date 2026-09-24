#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string name;
    double price;
    string processor;

public:

    Laptop(string n, double p, string proc) {
        name = n;
        price = p;
        processor = proc;
    }


    void display() {
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Processor: " << processor << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {

    Laptop laptop1("Dell XPS 13", 999.99, "Intel Core i7");
    Laptop laptop2("MacBook Pro 14", 1999.00, "Apple M3 Pro");
    Laptop laptop3("Lenovo ThinkPad X1", 1450.50, "Intel Core i9");

    laptop1.display();
    laptop2.display();
    laptop3.display();

    return 0;
}