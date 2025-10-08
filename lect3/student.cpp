#include <iostream>
#include <string>
using namespace std;
int main() {
    Student student("Alice", 101, 95, "Computer Science");
    student.displayInfo();
    student.updateMajor("Mathematics");
    cout << "After updating major:" << endl;
    student.displayInfo();
    return 0;
}
class Student {
  private:
    string name;
    int roll, marks;
    string major;

  public:
    // Constructor
    Student(string n, int r, int m, string maj) : name(n), roll(r), marks(m), major(maj) {}

    // Method to display student information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Major: " << major << endl;
    }

    // Method to update major
    void updateMajor(string newMajor) {
        major = newMajor;
    }
};
