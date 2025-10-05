// Write a program in C++ to create a class Car with data members name and speed.
// ● Use a member function display() to print values.
// ● Create two objects and display their details
#include<iostream>
using namespace std;
class Car{
    public:
        string name;
        int speed;
    public:
        void display(){
            cout<<"Name: "<<name<<", Speed: "<<speed<<" Km/hr"<<endl;
        } 
};
int main(){
    Car c1,c2;
    c1.name="Tata";
    c1.speed=50;
    c1.display();
    c2.name="BMW";
    c2.speed=90;
    c2.display();
}