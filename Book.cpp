#include <iostream>
using namespace std;

// Dinh nghia lop Book
class Book {
public:
    // Thuoc tinh
    string title; // Tieu de sach
    string author; // Tac gia sach

    // Phuong thuc hien thi thong tin sach
    void displayInfo() {
        cout << "Title: " << title << endl; // In ra tieu de sach
        cout << "Author: " << author << endl; // In ra ten tac gia
    }
};

int main() {
    Book book1;
    book1.title = "C++ Programming"; // Gan gia tri "C++ Programming" cho thuoc tinh title
    book1.author = "Bjarne Stroustrup"; // Gan gia tri "Bjarne Stroustrup" cho thuoc tinh author
    book1.displayInfo(); // Goi phuong thuc hien thi thong tin sach

    return 0;
}
