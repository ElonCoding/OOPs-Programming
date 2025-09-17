#include <iostream>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    Car() {
        brand = "";
        model = "";
    }

    Car(string x, string y) {
        brand = x;
        model = y;
    }
};

int main() {
  Car car1;
  Car car2("BMW", "X5");
  Car car3("Ford", "Mustang");
  cout << car1.brand << " " << car1.model << endl;
  cout << car2.brand << " " << car2.model << endl;
  cout << car3.brand << " " << car3.model << endl;
  return 0;
}