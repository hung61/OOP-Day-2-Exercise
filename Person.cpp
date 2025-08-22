#include <iostream>
using namespace std;

class Person{
public:
    string name; // Ten
    int age; // Tuoi
    string address; // Dia chi
    string phoneNumber; // So dien thoai

    // Ham hien thi thong tin nguoi
    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }

    // Kiem tra nguoi do co du tuoi truong thanh hay khong
    bool isAdult(){
        return age >= 18;
    }

    // Ham cap nhat dia chi moi cua nguoi
    void move(string newAddress){
        address = newAddress;
    }

    // Ham chao hoi
    void greet(){
        cout << "Hello, my name is " << name << endl;
    }
};

int main(){
    Person person1; // Khoi tao doi tuong Person
    person1.name = "John Doe"; // Gan ten
    person1.age = 20; // Gan tuoi
    person1.address = "123 Main St"; // Gan dia chi
    person1.phoneNumber = "0985654321"; // Gan so dien thoai

    person1.displayInfo(); // Hien thi thong tin nguoi

    person1.greet(); // Goi ham chao hoi

    // Kiem tra nguoi do co du tuoi truong thanh hay khong
    if (person1.isAdult()){
        cout << "This person is an adult" << endl;
    } else {
        cout << "This person is not an adult" << endl;
    }

    person1.move("789 Broadway Ave"); // Cap nhat dia chi
    cout << "Address after update: " << person1.address << endl;

    return 0;
}