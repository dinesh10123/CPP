#include<iostream>
using namespace std;
int main(){
    int numo, deno;
    cout<<"Enter Numerator: ";
    cin>>numo;
    cout<<"Enter Denominator: ";
    cin>>deno;
    try{
        if(deno == 0){
            throw runtime_error("Division by Zero");
        }
        else{
            cout<<"Division: "<<numo/deno<<endl;
        }
    }
    catch(runtime_error &e){
        cout<<"Exception: "<<e.what()<<endl;
    }
    // catch(const char* msg){
    //     cout<<"Exception: "<<msg<<endl;
    // }
    cout<<"Program Exit";
}