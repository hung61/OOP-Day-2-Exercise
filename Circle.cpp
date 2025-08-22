#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
class Circle{
public:    
    double radius; // Ban kinh hinh tron
    string color;  // Mau sac cua hinh tron

    // Ham hien thi mau sac cua hinh tron
    void displayColor(){
        cout << "Mau sac hinh tron: " << color << endl;
    }
    
    // Ham kiem tra ban kinh hop le (lon hon 0)
    bool valid(){
        if (radius > 0) return true;
        return false;
    }
    
    // Ham tinh chu vi hinh tron
    double circumference(){
        return 2 * M_PI * radius;
    }

    // Ham tinh dien tich hinh tron
    double area(){
        return M_PI * radius * radius;
    }
};
int main() {
    Circle circle1; // Khoi tao doi tuong hinh tron
    cout << "Nhap ban kinh hinh tron: ";
    cin >> circle1.radius; // Nhap ban kinh tu ban phim

    circle1.color = "Hong"; // Gan mau sac cho hinh tron
    circle1.displayColor(); // Hien thi mau sac

    // Kiem tra ban kinh hop le va tinh chu vi, dien tich neu hop le
    if (circle1.valid()){
        cout << "Chu vi hinh tron: " << circle1.circumference() << " don vi" << endl;
        cout << "Dien tich hinh tron: " << circle1.area() << " don vi vuong" << endl;
    } else cout << "Ban kinh hinh tron khong hop le";

    return 0;
}