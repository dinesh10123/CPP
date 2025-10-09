#include<iostream>
#include<fstream>
using namespace std;
class Student{
public:
    int id;
    char name[20];
};
int main(){
    Student s1 = {1, "ram"};
    //write data to file
    ofstream file("bin.dat", ios::binary);
    file.write((char*)&s1, sizeof(s1));
    file.close();

    //read from file
    Student s2;
    ifstream in("bin.dat", ios::binary);
    in.read((char*)&s2, sizeof(s2));
    in.close();
    
    cout<<"ID: "<<s2.id<<", Name: "<<s2.name<<endl;
}