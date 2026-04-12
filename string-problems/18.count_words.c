#include<stdio.h>
int main(){

    // Que -> Count number of words in a string.

    char str[50];
    printf("Enter the string  :");
    scanf("%[^\n]s",str);

    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            count++;
        }
        i++;
    }

    printf("Number of words = %d",count+1);
}