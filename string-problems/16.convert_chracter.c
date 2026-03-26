#include<stdio.h>
#include<string.h>

// Que -> Convert all uppercase characters to lower case .

int main(){

    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    
    for(int i = 0;str[i] != '\0' ;i++){
        if(str[i] >='A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }

    printf("%s",str);
    

    return 0;
}