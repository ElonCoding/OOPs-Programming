#include <iostream>
using namespace std;

class Overload {
  public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    string add(string a, string b) {
        return a + b;
    }
};

int main() {
    Overload obj;
    cout << "Int addition: " << obj.add(5, 10) << endl;
    cout << "Double addition: " << obj.add(5.5, 10.5) << endl;
    cout << "String addition: " << obj.add("Hello, ", "World!") << endl;
    return 0;
}
