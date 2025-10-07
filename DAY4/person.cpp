// 1. Create a class Person with data members as name, age, city. Write getters and setters for all the data
// members. Also add the display function. Create Default and Parameterized constructors. Create the
// object of this class in main method and invoke all the methods in that class.
#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    string city;
    public:
        void setDate(string n, int a, string c){
            name = n;
            age = a;
            city = c;
        }
        void getDate(){
            cout<<"Name: "<<name<<", Age: "<<age<<", City: "<<city<<endl;
        }
        Person(){
            cout<<"Defautl Constructor"<<endl;
            name = "Unknown";
            age = 0;
            city = "Not defined";
        }
        Person(string n, int a, string c){
            name = n;
            age = a;
            city = c;
        }
        void display(){
            cout<<"Parameterized constructor"<<endl;
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"City: "<<city<<endl;

        }
};
int main(){
    Person p1("Ram", 22, "Pune");
    p1.display();
    Person p2;
    p2.setDate("Dinesh", 22, "Jalgaon");
    p2.getDate();
}