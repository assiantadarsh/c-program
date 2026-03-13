#include<stdio.h>
#include<string.h>
int main(){
    char str[]="college wallah";
    char *ptr = str;
    int i=0;
    while(*ptr != '\0'){
        if(*ptr == ' '){
            printf("\n");
            ptr++;
            continue;
        }
        printf("%c",*ptr);
        ptr++;
        i++;
    }


    return 0;
}