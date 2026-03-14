#include<stdio.h>
#include<string.h>

// Write a function to insert a new character in a string at a given position
int main(){
char s[20] = "college";
 // second index add l 

 for(int i=6;i>=2;i--){
    s[i+1] = s[i];

 }
s[2] = 'l';
printf("%s",s);

}