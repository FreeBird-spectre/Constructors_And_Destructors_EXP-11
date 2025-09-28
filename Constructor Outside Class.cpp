//Abir Seth
//Entc A1
//PRN-24070123003

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

Enter the name of Student: abir 
Enter the fee: 68999
Student Name: abir
Fee: 68999


=== Code Execution Successful ===
