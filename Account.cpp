#include <iostream>
using namespace std;

class Account{
public:
    string ownerName; // Ten chu tai khoan
    string accountNumber; // So tai khoan
    double balance; // So du tai khoan
    double minimumBalance = 1000.0; // So du toi thieu yeu cau

    // Ham nap tien vao tai khoan
    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Ham rut tien khoi tai khoan
    void withdraw(double amount){
        if (amount > balance){
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
    }

    // Kiem tra so du co dat toi thieu khong
    bool checkMinimumBalance(){
        return balance >= minimumBalance;
    }

    // Hien thi thong tin chu tai khoan va so du
    void displayBalance(){
        cout << "Owner name: " << ownerName << endl;
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    Account acc1; // Khoi tao doi tuong tai khoan
    acc1.ownerName = "Alex"; // Gan ten chu tai khoan
    acc1.accountNumber = "123456789"; // Gan so tai khoan
    acc1.balance = 1000.0; // Gan so du ban dau
    
    acc1.displayBalance(); // Hien thi so du ban dau
    
    acc1.deposit(500); // Nap them 500 vao tai khoan
    acc1.displayBalance(); // Hien thi so du sau khi nap
    // Kiem tra so du co dat toi thieu khong
    if (acc1.checkMinimumBalance()){
        cout << "Account meets the minimum balance requirement." << endl;
    } else {
        cout << "Account does not meet the minimum balance requirement!" << endl;
    }
    
    acc1.withdraw(200); // Rut 200 khoi tai khoan
    acc1.displayBalance(); // Hien thi so du sau khi rut
    // Kiem tra so du co dat toi thieu khong
    if (acc1.checkMinimumBalance()){
        cout << "Account meets the minimum balance requirement." << endl;
    } else {
        cout << "Account does not meet the minimum balance requirement!" << endl;
    }

    acc1.withdraw(1500); // Thu rut qua so du hien co
    acc1.displayBalance(); // Hien thi so du sau khi rut
    // Kiem tra so du co dat toi thieu khong
    if (acc1.checkMinimumBalance()){
        cout << "Account meets the minimum balance requirement." << endl;
    } else {
        cout << "Account does not meet the minimum balance requirement!" << endl;
    }

    return 0;
}