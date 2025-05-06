62.class Math {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }

    static double divide(double a, double b) {
        return (b != 0) ? a / b : 0; 
    }
};


int main() {
    std::cout << "Addition: " << Math::add(5, 3) << std::endl;
    return 0;
}
