#include<stdio.h>
// print this pattern
// 123456789
// 1234 6789
// 123   789
// 12     89
// 1       9
int main(){
    int n;
   
    printf("enter the number of lines:");
    scanf("%d",&n);
    
    int num = n,nsp =1;

    int s = n+(2*1);

    for(int i=1;i<=(2*n)+1;i++){

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

        for(int j=s;j<=(2*n)+1;j++){
            printf("%d",j);
        }

        printf("\n");

        num--;
        nsp +=2;
        s++;
    }
   
    return 0;
}