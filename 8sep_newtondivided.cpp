#include <iostream>
#include<iomanip>
using namespace std; 
float proterm(int i, float value, float x[]){
    float pro =1; 
    for(int j =0; j<i; j++){
        pro *= value-x[j];
    }
    return pro; 
}
void dividedDiffTable(float x[], float y[][10], int n){
    for(int i =1; i<n; i++){
        for(int j =0; j<n-i; j++){
            y[j][i] = (y[j][i-1] - y[j+1][i-1])/(x[j] - x[i+j]);
        }
    }
}
float applyFormula(float value, float x[], float y[][10], int n){
    float sum = y[0][0];
    for(int i =1; i<n; i++){
        sum = sum + (proterm(i,value,x)*y[0][i]);
    }
    return sum; 
}
void printDiffTable(float y[][10], int n){
    for(int i =0 ; i<n;i++){
        for(int j =0; j<n-i; j++){
            cout<<setprecision(4)<<y[i][j]<<" ";
        }
        cout<<endl  ; 
    }
}
int main(){
    int n =4; 
    float value, sum, y[10][10];
    float x[10];
    cout<<"Enter value of x : ";
    for(int i =0; i<n; i++){
        cin>>x[i];
    }
    cout<<endl<<"Enter value of y :  ";
    for(int i =0; i<n; i++){
        cin>>y[i][0];
    }
    dividedDiffTable(x,y,n);
    printDiffTable(y,n);
    value = 7; 
    cout<<"Value at "<<value<<" is "<<applyFormula(value,x,y,n)<<endl; 
    return 0;
}