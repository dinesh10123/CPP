#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int powCal(int base, int exp){
    int result = 1;
    for(int i=0; i<exp; i++){
        result *= base;
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int sum = 0;
    int n = num;
    int digits = to_string(n).length();
    while(num > 0){
        int digit = num % 10;
        sum += powCal(digit, digits);
        //sum += (int) round(pow(digit, digits));
        num = num / 10;
    }
    if(sum == n){
        cout<<n<<" is Armstrong Number";
    }
    else{
        cout<<n<<" is not Armstrong Number";
    }
}