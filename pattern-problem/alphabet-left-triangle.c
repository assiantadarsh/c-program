#include<stdio.h>
int main(){
/*
    A
   AB
  ABC
 ABCD
print the give pattern ?
*/
int n;

printf("enter number of line:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a =1;
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        int d = a+64;
        char ch = (char)d;
        printf("%c",ch);
        a++;
    }
    printf("\n");
}

return 0;
}