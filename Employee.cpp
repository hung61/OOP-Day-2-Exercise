#include <iostream>
using namespace std;

// Dinh nghia lop Employee
class Employee {
public:
    // Thuoc tinh
    string name; // Ten nhan vien
    double salary; // Luong cua nhan vien

    // Phuong thuc hien thi thong tin nhan vien
    void displayInfo() {
        cout << "Name: " << name << endl; // In ra ten nhan vien
        cout << "Salary: " << salary << endl; // In ra muc luong
    }
};

int main() {
    Employee employee1;
    employee1.name = "Alice"; // Gan gia tri "Alice" cho thuoc tinh name
    employee1.salary = 50000; // Gan gia tri 50000 cho thuoc tinh salary
    employee1.displayInfo(); // Goi phuong thuc hien thi thong tin nhan vien

    return 0;
}
