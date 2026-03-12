#include<stdio.h>
int main(){
int a=5;
int* b= &a;
printf("%p\n",&a); // address of a
printf("%p\n",b);  // address of a
printf("%p\n",&b); // address of b
printf("%d\n",*b); // value of a
*b = 7;
printf("%d\n",a);  // value changed of a 
return 0;
}