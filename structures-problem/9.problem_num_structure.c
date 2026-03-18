#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
// Create a structure 'date' that contains three members namely date , month and year.Create 2 structure variables
// with different dates and now compare the two . If the dates are equal then display message as "equal" otherwise "Unequal".
bool flag = true;
typedef struct date{
    int day;
    int month;
    int year;
    
}date;

date a,b;
a.day = 23;
a.month = 2;
a.year = 2023;

b.day = 23;
b.month = 12;
b.year = 2023;

if(a.day != b.day) flag= false;
if(a.month != b.month) flag= false;
if(a.year != b.year) flag= false;

if(flag == true){
    printf("Equal");}
else{
    printf("Unequal");
}
return 0;
}



