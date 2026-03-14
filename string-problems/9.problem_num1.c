#include<stdio.h>
#include<string.h>
// Copy one string to another 
int main(){

    char s1[] = "college wallah";
    char* s2 = s1;

    // Let's change s1

    s1[0] = 'M';

    printf("%s",s2); // This is known as a Shallow Copy

    return 0;
}