#include<stdio.h>
int main(){
    /* WAP TO PRINT SUM OF ALL THE ELEMENTS IN N*M MATRIX */
int r,c,sum=0;
printf("enter number of rows :");
scanf("%d",&r);
printf("enter number of column :");
scanf("%d",&c);
printf("enter number :");
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
for (int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        sum = sum + arr[i][j];
    }
}
printf("the sum of all the n*m elements :%d",sum);
return 0;
}