// Create a class Book with data members as bname, id, author, price. Write getters and setters for all the data 
// members. Also add the display function. Create Default and Parameterized constructors. Create the object of 
// this class in main method and invoke all the methods in that class.
#include<iostream>
using namespace std;
class Book{
    string bname;
    int id;
    string author;
    double price;
    public:
        void setData(string b, int i, string a, double p){
            bname = b;
            id = i;
            author = a;
            price = p;
        }
        void getData(){
            cout<<"Book Name: "<<bname<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Price: "<<price<<endl;
        }
        Book(){
            cout<<"Default Constructor"<<endl;
            bname = "unknown";
            id = 0;
            author = "unknown";
            price = 0.0;
        }
        Book(string b, int i, string a, double p){
            cout<<"Parameterized Constructor"<<endl;
            bname = b;
            id = i;
            author = a;
            price = p;
        }
        void display(){
            cout<<"Book Name: "<<bname<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Price: "<<price<<endl;
        }
};
int main(){
    Book b1;
    b1.setData("java",101,"abc",500);
    b1.getData();
    Book b2("CPP",102,"abc",600);
    b2.display();
}