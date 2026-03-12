#include<stdio.h>
int main(){
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
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}