#include <iostream>
using namespace std;
class Laptop{
public:
    string brand; // Thuong hieu laptop
    string model; // Ten model laptop
    int ram; // Dung luong RAM (GB)
    int storage; // Dung luong o cung (GB)

    // Ham hien thi thong tin laptop
    void displayInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }

    // Ham kiem tra RAM co du de chay phan mem khong
    void checkRAM(int requiredRAM){
        if (ram >= requiredRAM){
            cout << "This laptop has enough RAM to run the software." << endl;
        } else {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
    }

    // Ham nang cap RAM
    void upgradeRAM(int additionalRAM){
        ram += additionalRAM;
    }
};
int main() {
    Laptop laptop1; // Khoi tao doi tuong laptop
    laptop1.brand = "Dell"; // Gan thuong hieu
    laptop1.model = "XPS 13"; // Gan ten model
    laptop1.ram = 8; // Gan dung luong RAM ban dau
    laptop1.storage = 256; // Gan dung luong o cung

    laptop1.displayInfo(); // Hien thi thong tin laptop

    laptop1.checkRAM(16); // Kiem tra RAM co du de chay phan mem khong

    laptop1.upgradeRAM(10); // Nang cap RAM len 10GB
    cout << "RAM after upgrade: " << laptop1.ram << endl; // Hien thi RAM sau khi nang cap

    return 0;
}