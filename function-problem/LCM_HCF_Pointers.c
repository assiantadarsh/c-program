#include<stdio.h>

// Find the hcf and lcm using pointers

int min(int x,int y){
    if(x<y) return x;
    else return y;
}
int hcf(int*a,int*b){
    int hcf = 1;
    for(int i=1;i<=min(*a,*b);i++){
        if(*a % i ==0 && *b %i ==0){
            hcf = i;
        }
    }
    return hcf;
}
int LCM(int* a,int* b,int* x){
    int lcm = (* a * *b)/(*x);
    return lcm;
    
}

int main(){
    int a,b;
    printf("Enter the value of a and b;");
    scanf("%d%d",&a,&b);
    int x = hcf(&a,&b);
    int lcm = LCM(&a,&b,&x);
    printf("HCF of %d and %d = %d\n",a,b,x);
    printf("LCM of %d and %d = %d",a,b,lcm);
}