// 2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. 
// Also add the display function. Create Default and Parameterized constructors. Create the
// object of this class in main method and invoke all the methods in that class.
#include<iostream>
using namespace std;
class Date{
    int day; 
    int month;
    int year;
    public:
        void setDate(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }
        void getData(){
            cout<<"Date = "<<day<<" : "<<month<<" : "<<year<<endl;
        }
        Date(){
            cout<<"Default Constructor"<<endl;
            day = 0;
            month = 0;
            year = 0;
        }
        Date(int d, int m, int y){
            cout<<"Parameterized constructor"<<endl;
            day = d;
            month = m;
            year = y;
        }
        void display(){
            cout<<"Date = "<<day<<" : "<<month<<" : "<<year<<endl;
        }
};
int main(){
    Date d1;
    d1.setDate(06,10,2025);
    d1.getData();
    Date d2(10,01,2003);
    d2.display();
}