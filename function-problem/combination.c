#include<stdio.h>
//combiantion using function ?
int factorial( int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value of r:");
    scanf("%d",&r);
    if(n<=0 || r<=0){
        printf("the combination is not possible for given numbers");
    }
    else{
        int nfact=factorial(n);
        int rfact=factorial(r);
        int nrfact=factorial(n-r);
        int ncr= nfact/(rfact*nrfact);
        printf("the factorial of given numbers:%d",ncr);
    }
    return 0;
}