// Q5. Employee Salary (Parameterized Constructor)
// Write a C++ program to create a class Employee with data members id, name, and salary.
// ● Use a parameterized constructor to initialize values.
// ● Display employee details using a function.
#include<iostream>
using namespace std;
class Employee{
    int id;
    string name;
    double salary;
    public:
        Employee(int i, string n, double s){
            id=i;
            name=n;
            salary=s;
        }
        void display(){
            cout<<"Employee Id: "<<id<<", Name: "<<name<<", Salary: "<<salary<<endl;
        }
};
int main(){
    Employee s1(101,"Dinesh",50000);
    Employee s2(102,"Sagar",60000);
    s1.display();
    s2.display();
}