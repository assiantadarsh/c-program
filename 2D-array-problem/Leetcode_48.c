#include<stdio.h>
// WAP to Rotate a matrix 90 Degree Clockwise.
int main(){
int n;
printf("enter the value of rows/column :");
scanf("%d",&n);
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp; 
    }
}
printf("Transposed Matrix\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);}
    printf("\n");
}
printf("\n");
printf("90 Degree rotated Matrix\n");
for(int i=0;i<n;i++){
    for(int j=n-1;j>=0;j--){
        printf("%d ",arr[i][j]);}
    printf("\n");
}
return 0;
}