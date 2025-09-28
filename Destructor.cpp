//Abir Seth
//PRN-24070123003
//ENTC A1
#include <iostream>
using namespace std;
int count = 0;

class Student {
public:
    Student() {
        count++;
        cout << "Object created. Total: " << count << endl;
    }
    ~Student() {
        count--;
        cout << "Object destroyed. Remaining: " << count << endl;
    }
};

int main() {
    Student s1, s2, s3;
    {
        Student s4; 
    } 
    return 0; 
}

Object created. Total: 1
Object created. Total: 2
Object created. Total: 3
Object created. Total: 4
Object destroyed. Remaining: 3
Object destroyed. Remaining: 2
Object destroyed. Remaining: 1
Object destroyed. Remaining: 0


=== Code Execution Successful ===
