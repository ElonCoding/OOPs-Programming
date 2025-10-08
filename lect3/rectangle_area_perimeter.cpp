#include <iostream>
#include <string>
using namespace std;   

class Rectangle {
  private:
    double length;
    double width;

  public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Method to calculate area
    double area() {
        return length * width;
    }

    // Method to calculate perimeter
    double perimeter() {
        return 2 * (length + width);
    }

    // Method to display rectangle information
    void displayInfo() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.displayInfo();
    return 0;
} 
