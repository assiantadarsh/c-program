#include<stdio.h>
#include<string.h>

// Que -> Check weather a given string is a palindrome or not .
int main(){
    puts("enter the name:");
    char str[100],rev[100];
    scanf("%[^\n]",str);

    strcpy(rev,str);
    strrev(rev);


    
    if(strcmp(rev,str) == 0){
        puts("The string is palindrome ");
    }
    else{
        puts("The string is not a palindrome");
    }

    return 0;
}