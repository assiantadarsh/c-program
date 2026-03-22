#include<stdio.h>
int main(){

    
    int arr[5] = {1,3,5,0,2};
    for(int i = 1;i<=4;i++){
        int j = i;
        while(j>=1 && arr[j] < arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}