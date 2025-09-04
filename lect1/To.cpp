#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Value of a is: " << a << endl;

    if (a > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is not positive." << endl;
    }

    return 0;
}