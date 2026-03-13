#include<stdio.h>
#include<string.h>
int main(){
char str[40];
scanf("%[^\n]s",str);

printf("the size of string is :");
int i= 0;
int size = 0;
while(str[i] != '\0'){
    size++;
    i++;
}
printf("The size is :%d",size);
for(int i=0 ,j = size-1;i<=j;i++,j--){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
puts("\nthe revese string is :");
puts(str);
}