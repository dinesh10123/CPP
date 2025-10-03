#include<iostream>
using namespace std;
int main(){
    int m1,n1,m2,n2;
    cout<<"Enter rows and column of 1st matrix: ";
    cin>>m1>>n1;
    cout<<"ENter rows and Column of 2nd matrix: ";
    cin>>m2>>n2;
    int a[m1][n1];
    int b[m2][n2];
    int mul[m1][n2];
    cout<<"Enter elements in first matrix : ";
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements in second matrix : ";
    for(int i=0; i<m2; i++){
        for(int j=0; j<n2; j++){
            cin>>b[i][j];
        }
    }

    if(n1 != m2){
        cout<<"Matrix multiplication is not possible";
        return 0;
    }

    for(int i=0; i<m1; i++){
        for(int j=0; j<n2; j++){
            mul[i][j] = 0;
        }
    }

    for(int i=0; i<m1; i++){
        for(int j=0; j<n2; j++){
            for(int k=0; k<n1; k++){
                mul[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    cout<<"Matrix multiplication is : "<<endl;
    for(int i=0; i<m1; i++){
        for(int j=0; j<n2; j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }

}