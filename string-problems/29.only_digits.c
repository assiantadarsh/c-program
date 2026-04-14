#include<stdio.h>
#include<string.h>
int main(){

    // Que -> Check if string contains only digits .
    
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int x = 0;

    for(int i = 0; str[i] != '\0';i++){
            char ch = (int)str[i];
            if(ch < 48 || ch >57){
                x = 1;
                break;
            }
        
    }
    if(x == 0){
        printf("\nYes\n");
    }
    else{
        printf("\nNo\n");
    }

    
    return 0;
}