#include<stdio.h>
int main(){
//WAP to print the transpose of the matrix entered by the user ?
int r,c;
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
printf("\n");
printf("original matrix\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("transpose of matrix\n");
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ",arr[j][i]);
    }
}
return 0;
}