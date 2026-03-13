#include<stdio.h>

int main(){


printf("name= Adarsh shukla\n ");
printf("roll number = 1232123\n");
printf("medium = Hindi\n");
int maths,english,physics,chemistry,hindi;
printf("enter your maths marks:");
scanf("%d",&maths);
printf("enter your physics marks:");
scanf("%d",&physics);
printf("enter your english marks:");
scanf("%d",&english);
printf("enter your chemistry marks:");
scanf("%d",&chemistry);
printf("enter your hindi marks:");
scanf("%d",&hindi);
int grade;
grade =( maths+physics+chemistry+english+hindi)/5;

if (grade >=90)
    printf("grade A");
else if (grade >=70 && grade < 90)
    printf("grade B");
else if(grade >=50 && grade < 70)
    printf("grade C");
else 
    printf("grade D");
return 0;


}