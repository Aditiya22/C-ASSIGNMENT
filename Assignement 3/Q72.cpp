#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    bool operator==(const Date& other) {
        return (day == other.day && month == other.month && year == other.year);
    }

    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date1(15, 8, 2023);
    Date date2(15, 8, 2023);
    if (date1 == date2) {
        cout << "Dates are equal." << endl;
    } else {
        cout << "Dates are not equal." << endl;
    }
    return 0;
}
