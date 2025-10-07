// 1:Write a program to create student class with data members rollno, marks1, mark2, mark3.
// Accept data (acceptInfo()) and display using display member function.
// Also display total, percentage and grade.
#include<iostream>
using namespace std;
class Student{
    private:
        int rollno;
        int mark1;
        int mark2;
        int mark3;
    public:
        void acceptInfo(int r, int m1, int m2, int m3){
            rollno = r;
            mark1 = m1;
            mark2 = m2;
            mark3 = m3;
        }
        void display(){
            cout<<"Roll no: "<<rollno<<", Mark1: "<<mark1<<", Mark2: "<<mark2<<", Mark3: "<<mark3<<endl;
        }
        int total(){
            return mark1+mark2+mark3;
        }
        int percentage(){
            return total()/3;
        }
        void grade(){
            if(percentage() > 75)
                cout<<"Grade A";
            else if(percentage()<75 && percentage()>60)
                cout<<"Grade B";
            else if(percentage()<60)
                cout<<"Grade C";
        }
};
int main(){
    Student s1;
    s1.acceptInfo(1,78,96,78);
    s1.display();
    cout<<"Total Marlks: "<<s1.total()<<endl;
    cout<<"Percentage: "<<s1.percentage()<<endl;
    s1.grade();
}