#include <iostream>
using namespace std;

// Dinh nghia lop Car
class Car {
public:
    // Thuoc tinh
    string brand; // Ten hang xe
    int year; // Nam san xuat

    // Phuong thuc hien thi thong tin xe
    void displayInfo() {
        cout << "Brand: " << brand << endl; // In ra ten hang xe
        cout << "Year: " << year << endl; // In ra nam san xuat
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota"; // Gan gia tri "Toyota" cho thuoc tinh brand
    car1.year = 2020; // Gan gia tri 2020 cho thuoc tinh year
    car1.displayInfo(); // Goi phuong thuc hien thi thong tin cua xe

    return 0;
}
