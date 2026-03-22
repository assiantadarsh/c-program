#include<stdio.h>
int main(){

    int k = 2;
    int arr[6] = {2,4,3,5,6,7};
    
    for(int i =0;i<k;i++){
        int max = arr[i];
        int idx = i;
        for(int j= i;j<=5;j++){
            if(max < arr[j]){
                max = arr[j];
                idx = j;
            }
            // Swap
            int temp = arr[idx];
            arr[idx] = arr[i];
            arr[i] = temp;
        }
    }
    printf("%d",arr[k-1]);
    return 0;
}