#include<stdio.h>
void swap(int* x,int* y){
    int temp = *x; // temp = a
    *x = *y;       // a = b
    *y = temp;     // b = a
    return;
}
int main(){
int a,b;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
swap(&a,&b);
printf("swapping value of a:%d",a);
printf("\nswapping value of b:%d",b);
return 0;
}