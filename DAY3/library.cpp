// Q7. Library Management
// Create a class Book with data members title, author, and price.
// ● Write functions to input and display details.
// ● Create an array of 5 books and print the book with the highest price
#include<iostream>
using namespace std;
class Book{
    string title;
    string author;
    double price;
    public:
        void input(){
            cout<<"Title: ";
            getline(cin, title);
            cout<<"Author: ";
            getline(cin, author);
            cout<<"Price: ";
            cin>>price;
            cin.ignore();
        }
        void display(){
            cout<<"Title: "<<title<<", Author: "<<author<<", Price: "<<price<<endl;
        }
};
int main(){
    const int n = 5;
    Book book[n];
    for(int i=0; i<n; i++){
        cout<<"Entered detail of Book "<<(i + 1)<<endl;
        book[i].input();
    }
    cout<<"All Book Detail"<<endl;
    for(int i=0; i<n; i++){
        book[i].display();
    }
}