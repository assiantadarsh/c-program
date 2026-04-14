#include<stdio.h>
#include<string.h>
int main(){

    // Que -> Reverse each word in a string .
    
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int start = 0;
    for(int i = 0;;i++){
        if(str[i] == ' ' || str[i] == '\0'){
            int end = i-1;

            while(start < end){
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
        if (str[i] == '\0'){
            break;
        }
    }
    printf("Reverse word : %s",str);
    
    return 0;
}