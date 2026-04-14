#include<stdio.h>
#include<string.h>
int main(){

    // Que -> Count vowels and consonants .
    
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
   
    
    int vowels = 0;
    int consonants = 0;
    for(int i = 0; str[i] != '\0';i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <'Z') ){
            if(str[i] == 'a'||str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'||
            str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'){
                vowels++;
        }
            else if(str[i] == ' ') continue;
            else{
                consonants++;
             }
            }
        
    }

    printf("Number of vowels : %d\n",vowels);
    printf("Number of consonants : %d",consonants);
    
    return 0;
}