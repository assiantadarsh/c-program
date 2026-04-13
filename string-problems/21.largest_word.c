#include<stdio.h>
#include<string.h>

int main(){

    // Que -> Find Largest word in a string ??

    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    char current[100] = "";
    char largest[100] = "";
    int i, j = 0;

    for(i = 0; str[i] != '\0'; i++){

        if(str[i] != ' '){
            current[j++] = str[i];
        }
        else{
            current[j] = '\0';   

            if(strlen(current) > strlen(largest)){
                strcpy(largest, current);
            }

            j = 0; 
        }
    }

    
    current[j] = '\0';
    if(strlen(current) > strlen(largest)){
        strcpy(largest, current);
    }

    printf("\n-------------------------\n");
    printf("Largest Word = %s", largest);

    return 0;
}