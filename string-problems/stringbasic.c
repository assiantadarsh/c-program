#include<stdio.h>
int main(){
    char arr[] = {'H','E','E','L','O','\0'};
    // \0 = Null character
    int i=0;
    while (arr[i] !='\0'){
        printf("%c",arr[i]);
        i++;
    }
    

    return 0;
}