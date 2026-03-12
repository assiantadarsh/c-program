#include<stdio.h>
#include<limits.h>
int main(){
int a[2][2]= {{2345,123},{543,5432}};
int min = INT_MAX;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(min>a[i][j]){
            min = a[i][j];
        }
    }
}
printf("the minimum number is :%d",min);
return 0;
}