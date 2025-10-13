#include<iostream>
using namespace std;
class Person{
    string name;
    public: 
        void getName(){
            cout<<"Enter Name: ";
            cin>>name;
        }
        void displayName(){
            cout<<"Name: "<<name<<endl;
        }
};
class Student : virtual public Person{
    string course;
    public:
        void getCOurse(){
            cout<<"Enter Course: ";
            cin>>course;
        }
        void displayCourse(){
            cout<<"Course: "<<course<<endl;
        }
};
class Employee : virtual public Person{
    string company;
    public:
        void getCompany(){
            cout<<"Enter Company: ";
            cin>>company;
        }
        void displayCompany(){
            cout<<"Company: "<<company<<endl;
        }

};
class Intern : public Student, public Employee{
    public:
        void getDate(){
            getName();
            getCOurse();
            getCompany();
        }
        void displayData(){
            displayName();
            displayCourse();
            displayCompany();
        }
};
int main(){
    Intern i;
    i.getDate();
    cout<<"Enter Detail"<<endl;
    i.displayData();
}