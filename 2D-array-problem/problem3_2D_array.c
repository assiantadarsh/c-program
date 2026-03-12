#include<stdio.h>
#include<limits.h>
int main(){
// WAP to print the row number having the maximum sum in given matrix
int a[3][4]={{1,2,3,4},{4,5,7,6},{3,6,5,4}};
int max= INT_MIN;
int max_row_index=-1;
for(int i=0;i<=2;i++){
    int sum =0;
    for(int j=0;j<=3;j++){
        sum =sum+ a[i][j];
        if(max<sum){
           max= sum;
           max_row_index=i;
        }
    }
}
printf("the sum of maximum row :%d\n",max);
printf("maximum sum number of row :%d",max_row_index);
return 0;
}