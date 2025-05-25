//27. Create a program that takes two integers as command line arguments and prints their sum.
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <int1> <int2>" << std::endl;
        return 1;
    }
    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);
    
    int sum = num1 + num2;
    cout << "Sum: " << sum << std::endl;
    return 0;
}

