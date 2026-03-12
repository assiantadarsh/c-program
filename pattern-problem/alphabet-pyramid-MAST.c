#include<stdio.h>
int main(){
/*
   A
  ABA
 ABCBC
ABCDCDE
ABCDEDEFG
print the given pattern ?
*/
int n;

printf("enter number of lines:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int e=i-1;
    int w;
    int a=1;
    for(int j=1;j<n-i;j++){
        printf(" ");
    }
    for(int q=1;q<=i;q++){
        int d=a+64;
        char ch=(char)d;
        printf("%c",ch);
        a++;
    }
    for(int k=1;k<=i-1;k++){
        w = e+64;
        char u=(char)w;
        printf("%c",u);
        e++;
    }
    printf("\n");
}

return 0;
}