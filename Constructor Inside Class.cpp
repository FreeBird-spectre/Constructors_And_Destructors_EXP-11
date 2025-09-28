#include <iostream>
using namespace std;

class Student {
    string name;
    double fee;

public:
    Student() {
        cout << "Enter the name of Student: ";
        cin >> name;
        cout << "Enter the fee: ";
        cin >> fee;
    }

    void display() {
        cout << "Student Name: " << name << "\nFee: " << fee << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}

Enter the name of Student: Abir
Enter the fee: 34000
Student Name: Abir
Fee: 34000


=== Code Execution Successful ===
