#include<stdio.h>
int main()
{
int leap_year;
printf("enetr a number:=");
scanf("%d",&leap_year);
if(leap_year%4==0 && leap_year%100 !=0  )
    printf("year is leap year");
else if (leap_year%400==0)
    printf("year is leap year");


else
    printf("not leap year");







}










