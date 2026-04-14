#include<stdio.h>
#include<string.h>
int main(){

    // Que -> Convert first letter of each word to uppercase . 
    
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int i = 0;

    // First Character check 

    if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] = str[i] - 32;
    }

    while(str[i] != '\0'){
        
        if(str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z'){
            i++;
            str[i] = str[i] - 32;     
        }
        i++;
    }

    printf("New String : %s",str);
    
    return 0;
}