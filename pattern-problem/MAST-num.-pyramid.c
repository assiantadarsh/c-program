#include<stdio.h>
int main(){
    /*
     1
    121
   12321
  1234321
 123454321
12345654321
print the given pattern ?
*/
int n;

printf("enter number of lines:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=i-1;
    for(int q=1;q<=n-i;q++){
        printf(" ");
    }
    for(int j=1;j<=i;j++)
        {printf("%d",j);}
    for(int k=1;k<=i-1;k++){
        printf("%d",a);
        a--;
    }
    printf("\n");

}

return 0;
}