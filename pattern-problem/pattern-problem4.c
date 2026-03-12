#include<stdio.h>
// print pattern
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
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
            printf("%d",(n+1)-min);
        }
        printf("\n");
    }
   
    return 0;
}