#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name;
    int age;

    ofstream out("file.txt");
    cout<<"Enter Nemae and Age: ";
    cin>>name>>age;
    out<<name<<" "<<age;
    out.close();

    ifstream in("file.txt");
    in>>name>>age;
    cout<<"Name: "<<name<<", Age: "<<age;
    in.close();
}
