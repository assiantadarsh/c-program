#include<stdio.h>
#include<limits.h>
int main(){
int a[2][2]= {{-2345,-123},{-543,-5432}};
int max = INT_MIN;
int max_i=0,max_j=0;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(max<a[i][j]){
            max = a[i][j];
            max_i = i;
            max_j = j;
        }
    }
}
printf("Index of max element :(%d,%d)",max_i,max_j);
printf("the maximum number is :%d\n",max);
return 0;
}