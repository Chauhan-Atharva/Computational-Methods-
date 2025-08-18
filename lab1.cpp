#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 
int main(){
    float a,b;
    cout<<"enter range for the function f(x) = x^3 -x +1 : a : "<<endl;
    cin>>a; 
    cout<<"b: "<<endl; 
    cin>>b; 
    vector<float> x; 
    cout<<"f(x) = x^3 -x +1"<<endl;
    cout<<"Enter the number of  decimal places: "<<endl; 
    int n; 
    int i =0; 
    cin>>n;
    if((a*a*a-a+1) * (b*b*b-b+1) > 0) {
        cout<<"wrong range entered "<<endl;        
    }
    else{
        cout<<"range is correct"<<endl;
        x.push_back((a+b)/2);//x0
        if(((x[i]*x[i]*x[i] - x[i] +1) * (a*a*a -a + 1)) < 0 ){
            x.push_back((x[i]+ a)/2);//x1
            i++;
        }
        else{
            x.push_back((x[i]+ b)/2);//x1
            i++;
        }
        while((x[i]- x[i-1]) > (0.5 * pow(10,-n))){

            if(((x[i]*x[i]*x[i] - x[i] +1) * (a*a*a -a + 1)) < 0 ){
                x.push_back((x[i]+ a)/2);//x1
                i++;
            }
            else{
            x.push_back((x[i]+ b)/2);//x1
            i++;
            }
        }
        for( float i: x){
            cout<<i<<endl; 
        }
        int size = x.size();
        cout<<"the root of the function f(x) = x^3 -x +1 is"<<(x[size-1] + x[size-2])/2<<endl;
    }
    return 0 ;
}