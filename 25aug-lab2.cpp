#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 
int main(){
    double a,b;
    cout<<"enter range for the function f(x) = x^3 -x +1 : a : "<<endl;
    cin>>a; //x0
    cout<<"b: "<<endl; 
    cin>>b; //x1
    vector<double> x; 
    cout<<"f(x) = x^3 -x +1"<<endl;
    cout<<"Enter the number of  decimal places: "<<endl; 
    int n; 
    cin>>n;
    cout<<n<<endl;
    if((a*a*a-a+1) * (b*b*b-b+1) > 0) {
        cout<<"wrong range entered "<<endl;        
    }
    else{
        x.push_back(a);
        x.push_back(b);
        int i = 1;
        cout<<"range is correct"<<endl;
        while(fabs(x[i]- x[i-1]) > (0.5 * pow(10,-n))){
        a = x[i-1];
        b = x[i];
        double val = ((a*(b*b*b-b+1)) - (b*(a*a*a - a +1)))/((b*b*b-b+1) - (a*a*a - a +1));
        cout<<val<<endl; 
        x.push_back(val);//x2 - 1st approx root
        i++;
        }
        // for( float i: x){
        //     cout<<i<<endl; 
        // }
        int size = x.size();
        cout<<"the root of the function f(x) = x^3 -x +1 is"<<(x[size-1] + x[size-2])/2<<endl;
    }
    return 0 ;
}