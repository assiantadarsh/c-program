#include<stdio.h>
#include<string.h>
// Create a structure type "book" with name , price,and number of pages
int main(){

    struct book{
        char name[50];
        float price;
        int number_of_pages;
    }a;

    a.number_of_pages = 34;
    a.price = 34.54;
    strcpy(a.name,"Secret copy");
    printf("%d\n",a.number_of_pages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    return 0;
}