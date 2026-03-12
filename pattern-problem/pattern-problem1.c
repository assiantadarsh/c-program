#include<stdio.h>
// print the problem
// 1234321
// 123 321
// 12   21
// 1     1
int main(){
    int n;
   
    printf("enter the number of lines:");
    scanf("%d",&n);
    int num = n;
    int nsp =1;
    for(int i=1;i<=n+1;i++){
        printf("%d",i);
    }
    for(int i = n;i>=1;i--){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=num;j++){
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=num;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
        num--;
        nsp +=2;
    }
   
    return 0;
}