#include<stdio.h>
#include<string.h>
int main(){
    char  str[] = "Raghav";
    int x = strlen(str);
    printf("%d\n",x);
    char str2[x];
    strcpy(str2,str);

    str2[0] = 'M'; // It's a deep copy
    printf("%s",str2);

}