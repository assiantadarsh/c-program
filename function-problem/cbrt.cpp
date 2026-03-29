#include<iostream>
#include<cmath>
using namespace std;

// Find cube root without built in function .

double sqrtfull(double n , int points){
    double i = 0;

    while(i*i*i <= n){
        i++;
    }
    double ans = i-1;
    
    double factor = 0.1;
    for(int i = 1;i<=points;i++){
        while((ans + factor)*(ans+factor)*(ans+factor)<=n){
            ans = ans + factor;
        }
        factor = factor/10;
    }

    return ans;
}
int main(){

    double n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n<0) cout<<"CBRT of negative number does not possible";

    else{
        double y = sqrtfull(n,5);
        cout<<"CBRT = "<<y<<endl;
    }

    // check 
    cout<<"\nuse buit in function"<<endl;
    double x = cbrt(n);
    cout<<"CBRT = "<<x;

}