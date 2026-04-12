#include<stdio.h>
int main(){

    // Que -> Remove duplicate characters from a string.

    char str[50];
    printf("Enter the string  :");
    scanf("%[^\n]s",str);

    char result[50];
    int k = 0;

    for(int i = 0;str[i] != '\0';i++){
        int x = 0;
        for(int j = 0;j<i;j++){
            if(str[i] == str[j]){
                x = 1;
            }
        }
        
        if(x == 0){
            result[k] = str[i];
            k++;
        }
    }

    for(int i = 0;i<k;i++){
        printf("%c",result[i]);
    }

}