// Create a class Student with data members rollNo, name, and marks.
// ● Add member function input() to take values.
// ● Add function display() to print them.
// ● Create an array of 3 students and display all details.
#include<iostream>
using namespace std;
class Student{
    public:
        int rollno;
        string name;
        int mark;
    public:
        void input(){
            cout<<"Enter Roll No: ";
            cin>>rollno;
            cin.ignore();
            cout<<"Enter Name: ";
            getline(cin, name);
            cout<<"Enter Mark: ";
            cin>>mark;
        }
        void display(){
            cout<<"Roll No: "<<rollno<<", Name: "<<name<<", Mark: "<<mark<<endl;
        }
};
int main(){
    int n=3;
    Student student[n];
    for(int i=0; i<n; i++){
        cout<<"Details Enter for Student "<<(i + 1)<<endl;
        student[i].input();
    }
    cout<<"All Student Details: "<<endl;
    for(int i=0; i<n; i++){
        student[i].display();
    }
}