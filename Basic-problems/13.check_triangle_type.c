#include<stdio.h>
int main(){

printf("***********TRIANGLE TYPE CHECKER****************\n");

float a,b,c;
printf("enter three side of triangle: ");
scanf("%f %f %f ",&a,&b,&c);
if(a+b==c && b+c==a && c+a==b)
    if(a==b && b==c)
        printf("this is equilateral triangle");
    else if ( a==b || b==c || c==a)
        printf("this is a isoceless triangle  ");
    else 
        printf("this is a scalene triangle");
else
    printf("not a valid triangle");


return 0;

}