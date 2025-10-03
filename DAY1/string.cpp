#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter String  : ";
    //cin>>str;
    getline(cin, str);
    int count = 0;
    for(int i=0; i<str.length(); i++){
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    cout<<"Vowels in "<<str<<" is "<<count;
}