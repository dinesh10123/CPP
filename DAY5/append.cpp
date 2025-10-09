#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("abc.txt", ios::app);
    file<<"Dinesh Mali"<<endl;
    file.close();
    return 0;
}