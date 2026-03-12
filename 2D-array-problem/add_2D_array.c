/* wap to add two matrices */
#include<stdio.h>
int main(){
int a[2][2]= {{4,4},{4,4}};
int b[2][2]= {{4,4},{4,4}};
int sum[2][2];
for(int i=0;i<=1;i++){
    for(int j=0;j<=1;j++){
        sum[i][j] = a[i][j]+b[i][j];
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}
return 0;
}