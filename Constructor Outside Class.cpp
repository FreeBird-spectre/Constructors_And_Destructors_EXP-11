//Abir Seth
//Entc A1
//PRN-24070123003

#include <iostream>
using namespace std;

class Student {
    string name;
    double fee;

public:
    Student();
    void display();
};

Student::Student() {
    cout << "Enter the name of Student: ";
    cin >> name;
    cout << "Enter the fee: ";
    cin >> fee;
}

void Student::display() {
    cout << "Student Name: " << name << "\nFee: " << fee << endl;
}

int main() {
    Student s;
    s.display();
    return 0;
}

Enter the name of Student: AbirSeth
Enter the fee: 200000
Student Name: AbirSeth
Fee: 200000


=== Code Execution Successful ===
