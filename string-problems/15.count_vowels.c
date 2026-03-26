#include<stdio.h>
#include<string.h>

// Que -> Count the number of Vowels.

int main(){

    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int count = 0;

    for(int i = 0; str[i] != '\0' ; i++){
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'||str[i] == 'u' ||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }

    printf("\n The number of vowels is : %d",count);

    return 0;
}