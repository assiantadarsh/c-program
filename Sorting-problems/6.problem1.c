#include<stdio.h>

// Given an integer array arr ,move all 0's to the end of it while maintaining the relative order of the non - zero elements.

int main(){
    int arr[9] = {5,0,-2,0,0,4,1,3,0};
    // int ans[9];
    // // Method -> 1
    // int idx = 0;
    // for(int i = 0;i<9;i++){
    //     if(arr[i] != 0){
    //         ans[idx] = arr[i];
    //         idx++;
    //     }
    // }
    // for(int i = idx+1;i<9;i++){
    //     ans[i] = 0;
    // }
    // for(int i = 0;i<9;i++){
    //     printf("%d ",ans[i]);
    // }
    
    // Method -> 2
    for(int i= 0;i<=8;i++){
        for(int j =0;j<8-i;j++){
            if(arr[j] == 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    for(int i = 0;i<9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}