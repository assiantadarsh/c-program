#include<stdio.h>
#include<string.h>
int main(){

    // Que ->Remove all occurrences of a given character.
    
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    char remove;
    printf("Enter which element you want to remove : ");
    scanf(" %c",&remove);

    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == remove){
            i++;
        }
        printf("%c",str[i]);
        i++;
    }
    
    
    return 0;
}