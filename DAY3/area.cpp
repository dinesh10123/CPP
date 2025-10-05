// Rectangle (Area & Perimeter)
// Create a class Rectangle with data members length and width.
// ● Add member functions to calculate area and perimeter.
// ● Read values from user and display results
#include<iostream>
using namespace std;
class Rectangle{
    public:
        int length;
        int breadth;
    public:
        void setData(int l, int b){
            length = l;
            breadth = b;
        }
        int area(int l, int b){
            return l * b;
        }
        int perimeter(int l, int b){
            return 2 * (l + b);
        }
};
int main(){
    int l,b;
    cout<<"Enter Length and Breadth : ";
    cin>>l>>b;
    Rectangle r1;
    cout<<"Area of Rectangle : "<<r1.area(l, b)<<endl;
    cout<<"Perimeter of Rectangle : "<<r1.perimeter(l, b);
}