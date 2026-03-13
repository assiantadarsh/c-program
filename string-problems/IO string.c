#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s",str); // only print one sentence 
    puts(str);
    char str2[56];
    scanf(" %[^\n]",str2);
    puts(str2);
    return 0;
}