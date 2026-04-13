#include<stdio.h>
int main(){

    // Que -> Frequency of each character.

    char str[50];
    printf("Enter the string  :");
    scanf("%[^\n]s",str);

    for(int i = 0;str[i] != '\0';i++){

        if(str[i] == ' '){
            continue;
        }
        else{
            int visited = 0;
            int count = 0;
            for(int k = 0;k<i;k++){
                if(str[i] == str[k]){
                    visited = 1;
            }
        }
            if(visited == 1) continue;
            else{
                for(int j = 0;str[j] != '\0';j++){
                    if(str[i] == str[j]){
                        count++;
                }
            }
                printf("%c -> %d\n",str[i],count);
        }
        }
        


    }

}