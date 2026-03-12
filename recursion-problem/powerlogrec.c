#include<stdio.h>
// power function(Logarithmic).
int powerlog(int a,int b){
    if(b==1 ) return a;
    if(b==0) return 1;
    int x= powerlog(a,b/2);
    if(b%2==0){
        return x*x;
    }
    else{
        return x*x*2;
    }
}
int main(){
int a,b;
printf("enter base:");
scanf("%d",&a);
printf("enter power:");
scanf("%d",&b);
int p = powerlog(a,b);
printf("%d",p);
return 0;
}