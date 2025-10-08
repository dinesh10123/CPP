#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imag;
    public:
        void setData(int r, int i){
            real = r;
            imag = i;
        }
        void getData(){
            cout<<"Addition of two Complex no : "<<real<<" + "<<imag<<"i"<<endl;
        }
        Complex add(Complex c){
            Complex temp = c;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
};
int main(){
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(5,6);
    c3 = c1.add(c2);
    c3.getData();
}