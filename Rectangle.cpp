#include <iostream>
using namespace std;

// Dinh nghia lop Rectangle
class Rectangle {
public:
    // Thuoc tinh
    int width; // Chieu rong hinh chu nhat
    int height; // Chieu cao hinh chu nhat

    // Phuong thuc tinh dien tich
    int calculateArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect1;
    rect1.width = 5; // Gan gia tri 5 cho thuoc tinh width
    rect1.height = 10; // Gan gia tri 10 cho thuoc tinh height
    cout << "Area: " << rect1.calculateArea() << endl; // Goi phuong thuc tinh dien tich va in ra man hinh

    return 0;
}
