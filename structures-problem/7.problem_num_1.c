#include<stdio.h>
#include<string.h>
int main(){

// A record contains name of cricketer , his age,number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold records of 20 such cricketer and then write a program to read these records.

typedef struct cricketer{
    char firstname[45];
    char lastname[23];
    int age;
    int nom;
    float average;
}cricketer;

cricketer arr[3];

for(int i=0;i<3;i++){
    scanf("%s",arr[i].firstname);
    scanf("%s",arr[i].lastname);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].nom);
    scanf("%f",&arr[i].average);

}

for(int i=0;i<3;i++){
    printf("\nName : %s %s\n",arr[i].firstname,arr[i].lastname);
    printf("Age : %d\n",arr[i].age);
    printf("No. of matches : %d\n",arr[i].nom);
    printf("Average score : %.2f\n",arr[i].average);

}


}