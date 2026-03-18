#include<stdio.h>
#include<string.h>
typedef int*  pointer;
int main(){

int x = 5, y = 4;
// int* a = &x , b = &y;//int *a = &x and int b = &y Error
pointer a = &x , b = &y;
printf("%p\n",a);
printf("%p\n",b);

    return 0;
}