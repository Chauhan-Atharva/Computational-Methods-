#include <iostream>
#include <cmath>
#define f(x) 1/(1+pow(x,2))
using namespace std; 
int main(){
    float lower, upper, integration = 0.0, stepSize,k; 
    int i, subInterval; 
    cout<<"Function is 1/(1+x^2)"<<endl;
    cout<<"Enter lower limit of integration: "<<endl; 
    cin>>lower ;
    cout<<"Enter upper limit of integration: "<<endl; 
    cin>>upper;
    cout<<"Enter number of subIntervals: "<<endl;
    cin>>subInterval;
    stepSize = (upper - lower)/subInterval;
    for(i = 1; i<= subInterval-1; i++){
        k = lower + i*stepSize;
        integration = integration + 2*(f(k));
    }
    integration = integration * stepSize/2;
    cout<<endl<<"Required value of integration is: "<<integration<<endl; 
    return 0;
}
