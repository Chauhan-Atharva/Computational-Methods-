#include <iostream> 
using namespace std; 
int func(int x){
    return x*x*x -4*x -5;
}
int main(){
    float x[100], y[100], xp ,  yp= 0, p;
    int i, j, n; 
    cout<<"Function is x^3-4*x-5"<<endl; 
    cout<<"Enter number of data"<<endl; 
    cin>>n; 
    cout<<"Enter data"<<endl; 
    for(i = 1; i<=n ; i++){
        cout<<"x["<<i<<"] = ";
        cin>>x[i];
        cout<<"y["<<i<<"] = ";
        y[i] = func(x[i]);
        cout<<y[i]<<endl; 
    }
    cout<<"Enter interpolation point: "<<endl;  
    cin>>xp; 
    for(int i = 1; i<=n; i++){
        p=1; 
        for(int j = 1;j<=n; j++){
            if(i!=j){
                p = p*(xp-x[j])/(x[i] - x[j]);
            }
        }
        yp = yp + p*y[i];
    }
    cout<<"Interpolated value at "<<xp <<" is "<<yp<<endl;
    return 0;
}