#include<stdio.h>
int main(){
int a[10][10],row,col;
printf("enter the size of row :");
scanf("%d",&row);
printf("enter the size of column :");
scanf("%d",&col);
printf("a[%d][%d]\n",row,col);
// input element in they matrix
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d\n",&a[i][j]);
    }
}
printf(" matrix is :\n");
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
return 0;
}