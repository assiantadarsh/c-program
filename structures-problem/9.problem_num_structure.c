#include<stdio.h>
#include<string.h>
int main(){
// Create a structure 'date' that contains three members namely date , month and year.Create 2 structure variables with different dates and now compare the two . If the dates are equal then display message as "equal" otherwise "Unequal".

typedef struct date{
    int day;
    int month;
    int year;
    
}date;

date a , b;
a.day = 12;
a.month = 4;
a.year = 2006;

b.day = 23;
b.month = 6;
b.year = 2007;



}