#include<stdio.h>
// print pattern
// 1111111
// 1222221
// 1233321
// 1234321
// 1233321
// 1222221
// 1111111
int main(){
    int n,min;
   
    printf("enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=(2*n)-1;i++){
        for(int j=1;j<=(2*n)-1;j++){
            int a=i;
            int b=j;
            if(i>n) a = 2*n - i;
            if (j>n) b =  2*n - j;
            if(a<b) min = a;
            else min = b;
            printf("%d",min);
        }
        printf("\n");
    }
  
}