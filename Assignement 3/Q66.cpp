#include <iostream>

class Matrix {
private:
    int rows, cols;
    int** data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    void setValue(int r, int c, int value) {
        if (r < rows && c < cols) {
            data[r][c] = value;
        }
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix m(2, 3);
    m.setValue(0, 0, 1);
    m.setValue(0, 1, 2);
    m.setValue(0, 2, 3);
    m.setValue(1, 0,
