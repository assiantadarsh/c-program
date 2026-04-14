#include<stdio.h>
#include<string.h>
int main(){

    // Que ->Find all duplicate characters in a string .
    
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    for(int i = 0; str[i] != '\0';i++){
        int visited = 0;
        for(int k = 0;k<i;k++){
            if(str[i] == str[k]){
                visited = 1;
            }
        }
        if (visited == 1) continue;
        else{
            for(int j = i+1;str[j] != '\0';j++){
                if(str[i] == str[j]){
                    printf(" %c ",str[i]);
                    break;
            }
        }
        }
        
    }
    
    return 0;
}