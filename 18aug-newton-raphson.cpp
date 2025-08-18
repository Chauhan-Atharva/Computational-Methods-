#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 
int main(){
    float xo; 
    cout<<"f(x) = x^3 -x +1"<<endl; 
    cout<<"Enter the approximate root value : "<<endl; 
    cin>>xo;
    cout<<"Enter the approximate number of decimal values: "<<endl;
    int n; cin>>n; 
    vector<float> x;
    x.push_back(xo);
    int  i = 0; 
    do{
        float last = x[i];
        float xn = last - ((last*last*last) - (last) +1 )/((3*last*last)- 1);
        x.push_back(xn);
        i++;
    }while((x[i] - x[i-1]) > (0.5 * pow(10,-n)) );
    cout<<"More optimised answer with newton raphson mehtod is = "<<(x[i]+x[i-1])/2<<endl;
}