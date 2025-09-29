//Abir Seth
//PRN-24070123003
//ENTC A1
#include <iostream>
using namespace std;

class Date {
public:
    int day, month, year;

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void show() {
        cout << "Today's date is: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int d, m, y;

    cout << "Enter day: ";
    cin >> d;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    Date today(d, m, y);

    today.show();

    return 0;
}

Enter day: 5
Enter month: 11
Enter year: 2020
Today's date is: 5/11/2020


=== Code Execution Successful ===
