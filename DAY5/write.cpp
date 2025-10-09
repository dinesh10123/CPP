#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("abc.txt");
    if(!file){
        cout<<"file not created";
    }
    file<<"Hello c++"<<endl;
    file<<"File handling"<<endl;
    file.close();
    cout<<"Success";
}