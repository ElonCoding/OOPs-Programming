#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    double salary;

public:
    Person(string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
    }
    
    void retrieve_data() {
        cout << "=== Person Details ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years old" << endl;
        cout << "Salary: $" << salary << endl;
        cout << "=====================" << endl << endl;
    }
    
    void change_age(int new_age) {
        cout << "Changing age from " << age << " to " << new_age << endl;
        age = new_age;
    }
    
    void change_salary(double new_salary) {
        cout << "Changing salary from $" << salary << " to $" << new_salary << endl;
        salary = new_salary;
    }
};

int main() {
    Person amit("Amit Khan", 20, 2500.0);
    
    cout << "Initial Data:" << endl;
    amit.retrieve_data();
    
    amit.change_age(25);
    cout << "\nAfter age change:" << endl;
    amit.retrieve_data();
    
    amit.change_salary(3500.0);
    cout << "\nAfter salary change:" << endl;
    amit.retrieve_data();
    
    cout << "\n--- Creating another person ---" << endl;
    Person sara("Parikshit Sharma", 28, 4500.0);
    sara.retrieve_data();
    
    return 0;
}