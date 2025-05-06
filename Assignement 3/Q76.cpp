#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    Distance(int f, int i) : feet(f), inches(i) {}

    friend Distance addDistances(const Distance& d1, const Distance& d2);
};

Distance addDistances(const Distance& d1, const Distance& d2) {
    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;
    if (totalInches >= 12) {
        totalFeet += totalInches / 12;
        totalInches = totalInches % 12;
    }
    return Distance(totalFeet, totalInches);
}

int main() {
    Distance d1(5, 9);
    Distance d2(3, 10);
    Distance result = addDistances(d1, d2);
    cout << "Total Distance: " << result.feet << " feet " << result.inches << " inches" << endl;
    return 0;
}
