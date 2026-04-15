#include<stdio.h>
#include<string.h>

int palindrome(char str[],int start,int end){

    while(start<end){
        if(str[start] != str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main(){

    // Que -> Count number of palindromic substrings .
    
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int count = 0;

    for(int i = 0;str[i] != '\0';i++){
        for(int j = i;str[j] != '\0';j++){

            if(palindrome(str,i,j) == 1){
                count++;
            };
            
        }
    }

    printf("The number of palindromic substring : %d",count);
    
    return 0;
}