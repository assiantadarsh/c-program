#include<stdio.h>
#include<string.h>
int main(){

    // Que -> Find the most frequent character .
    
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int max_count = 0;
    char temp = '\0';

    for(int i = 0;str[i] != '\0';i++){
        int count = 0;
        int visited = 1;

        for(int k = 0;k<i;k++){
            if(str[i] == str[k]){
                visited = 0;
            }
        }
        if(visited == 0) continue;
        else{
            for(int j = 0;str[j] != '\0';j++){
                if(str[i] == str[j]){
                    count++;
            }
        }

            if(count > max_count){
                max_count = count;
                temp = str[i];
        }
        }
        
    }

    printf("The most frequent character is : %c",temp);
    
    return 0;
}