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
        cout << "\nStudent Name: " << name;
        cout << "\nFee: " << fee << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}

Enter the name of Student: Abir 
Enter the fee: 65900

Student Name: Abir
Fee: 65900


=== Code Execution Successful ===
