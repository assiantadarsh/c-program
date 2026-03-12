#include<stdio.h>
int main(){
    /*
    Given an array of integers ,change the value of all odd indexed
    elements to it's second multiple and increment all even indexed by 10.
    */
int arr[10] = {1,3,5,6,3,4,2,4,2,7};

for(int i=0;i<=9;i++){
    if(i%2==0){
        printf("the value of array %d\n:",arr[i]+10);
    }
    else{
        printf("the value of array:%d\n",arr[i]*2);
    }
}

return 0;
}