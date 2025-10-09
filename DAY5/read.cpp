#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file("abc.txt");
    if(!file){
        cout<<"file not found";
        return 1;
    }
    string line;
    while(getline(file, line)){
        cout<<line<<endl;
    }
    file.close();
    return 0;
}