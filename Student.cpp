#include <iostream>
using namespace std;

// Dinh nghia lop Student
class Student {
public:
    // Thuoc tinh
    string name; // Ten sinh vien
    double grade; // Diem so cua sinh vien

    // Phuong thuc hien thi thong tin sinh vien
    void displayInfo() {
        cout << "Name: " << name << endl; // In ra ten sinh vien
        cout << "Grade: " << grade << endl; // In ra diem so
    }
};

int main() {
    Student student1;
    student1.name = "John"; // Gan gia tri "John" cho thuoc tinh name
    student1.grade = 8.5; // Gan gia tri 8.5 cho thuoc tinh grade
    student1.displayInfo(); // Goi phuong thuc hien thi thong tin sinh vien

    return 0;
}
