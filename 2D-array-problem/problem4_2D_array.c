#include<stdio.h>
int main(){
/*
WAP to print the transpose of the matrix enterd by the user 
and store it in a seprate matrix.
*/
int r,c;
printf("enter the number of rows:");
scanf("%d",&r);
printf("enter the number of column:");
scanf("%d",&c);
int arr[r][c];
int brr[c][r];
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
        brr[i][j]=arr[j][i];
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}
return 0;
}