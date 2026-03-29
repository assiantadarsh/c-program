#include<iostream>
#include<cmath>
using namespace std;

// Find square root without built in function .

double sqrtfull(double n , int points){
    double i = 0;

    while(i*i <= n){
        i++;
    }
    double ans = i-1;
    
    double factor = 0.1;
    for(int i = 1;i<=points;i++){
        while((ans + factor)*(ans+factor)<=n){
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
    if(n<0) cout<<"Sqrt of negative number does not possible";

    else{
        cout<<"SQRT = "<<sqrtfull(n,5)<<endl;
    }
    // Check 

    cout<<"\nUse built in function"<<endl;

    cout<<"SQRT = "<<sqrt(n);
}