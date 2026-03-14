#include<stdio.h>
#include<string.h>
int main(){
// Copy one string to another a deep copy

// Method -> 1 using for loop

char s1[] = "adarsh wallah";
// first calculate the size of the string 
int size = 0;
int i=0;
while (s1[i] != '\0'){
    size++;
    i++;
}
printf("size = %d\n",size);
char s2[size];
for(int i=0;i<size;i++){
    s2[i] = s1[i];
    printf("%c",s2[i]);
}
}

