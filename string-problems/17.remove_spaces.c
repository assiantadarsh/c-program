#include<stdio.h>
#include<string.h>

// Que -> Remove all spaces .

int main(){

    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    
   int i = 0,j = 0;

   while(str[i] != '\0'){
        if(str[i] != ' '){
           str[j] = str[i];
           j++;
        }
        i++;
   }
   str[j] = '\0';
   printf("%s",str);

    return 0;
}