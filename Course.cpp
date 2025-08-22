#include <iostream>
using namespace std;

class Course{
public:
    string courseName; // Ten khoa hoc
    string courseCode; // Ma khoa hoc
    int credits; // So tin chi
    string instructorName; // Ten giang vien

    // Ham hien thi thong tin khoa hoc
    void displayInfo(){
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor Name: " << instructorName << endl;
    }

    // Kiem tra khoa hoc co nhieu tin chi khong
    bool isHighCredit(){
        return credits > 3;
    }

    // Kiem tra khoa hoc co can thuc hanh lab khong
    bool isLabRequired(){
        return credits > 4;
    }
};

int main(){
    Course course1; // Khoi tao doi tuong khoa hoc
    course1.courseName = "Object Oriented Programming"; // Gan ten khoa hoc
    course1.courseCode = "CS202"; // Gan ma khoa hoc
    course1.credits = 4; // Gan so tin chi
    course1.instructorName = "Huynh Xuan Phung"; // Gan ten giang vien

    course1.displayInfo(); // Hien thi thong tin khoa hoc

    // Kiem tra khoa hoc co hon 3 tin chi hay khong
    if (course1.isHighCredit()){
        cout << "This is a high credit course" << endl;
    } else {
        cout << "This is not a high credit course" << endl;
    }

    // Kiem tra khoa hoc co yeu cau phong thi nghiem khong
    if (course1.isLabRequired()){
        cout << "This course requires a lab" << endl;
    } else {
        cout << "This course does not require a lab" << endl;
    }

    return 0;
}