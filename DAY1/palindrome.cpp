#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int pal = 0;
    int n = num;
    while(num > 0){
        int digit = num % 10;
        pal = pal * 10 + digit;
        num = num / 10;
    }
    if(pal == n){
        cout<<n<<" is Palindrome number";
    }
    else{
        cout<<n<<" is not palindrome number";
    }
}