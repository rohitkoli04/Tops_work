#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int* data;

public:
    
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    ~Matrix() {
        delete[] data;
    }

    int getSize() const {
        return size;
    }

    int* getData() const {
        return data;
    }

    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            cout << " Matrices have different sizes" << endl;
            exit(1);
        }

        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    void display() const {
        cout << "[";
        for (int i = 0; i < size; i++) {
            cout << data[i];
            if (i < size - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};

int main() {
    Matrix matrix1(3);
    Matrix matrix2(3);

    int* matrix1Data = matrix1.getData();
    matrix1Data[0] = 1;
    matrix1Data[1] = 2;
    matrix1Data[2] = 3;

    int* matrix2Data = matrix2.getData();
    matrix2Data[0] = 4;
    matrix2Data[1] = 5;
    matrix2Data[2] = 6;

    Matrix result = matrix1 + matrix2;

    cout << "Matrix 1: ";
    matrix1.display();

    cout << "Matrix 2: ";
    matrix2.display();

    cout << "Result: ";
    result.display();

     
}