#include<stdio.h> 
// count number of negative element in the Array ?
int main(){
int arr[6] = {2,-4,7,-5,6,-9};
int count = 0;

for(int i =0;i<=5;i++){
    if(arr[i]<0)
        {printf("%d ",arr[i]);
        count++;}
}

printf("%d",count);

return 0;
}