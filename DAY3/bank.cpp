// Bank Account
// Create a class BankAccount with:
// ● Data members: accountNumber, balance.
// ● Functions: deposit(), withdraw(), displayBalance().
// ● Perform deposit and withdrawal operations using objects.
#include<iostream>
using namespace std;
class BankAccount{
    public:
        int accountNumber;
        int balance;
    public:
        BankAccount(){
            accountNumber = 0;
            balance = 0;
        }
        void deposit(int amt){
            balance = balance + amt;
            cout<<"Deposit : "<<amt<<endl;
        }

        void withdraw(int amt){
            if(balance > amt){
                balance = balance - amt;
                cout<<"withdraw: "<<amt<<endl;
            }
            else{
                cout<<"Insufficient fund";
            }
        }

        void displayBalance(){
            cout<<"Balance: "<<balance<<endl;;
        }
};
int main(){
    BankAccount b;
    b.deposit(5000);
    b.withdraw(1000);
    b.displayBalance();
}