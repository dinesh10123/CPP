#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Two Numbers ";
    cin>>a>>b;
    cout<<"Befor Swap "<<"a = "<<a<<" b = "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After Swap "<<"a = "<<a<<" b = "<<b;
}