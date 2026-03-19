#include<stdio.h>
// Given an array of integers numbers that is already sorted in non - decreasing order , find two 
// numbers such that they add up to a specific target number.
// Use - 2 pointers 

int main(){
    int arr[10] = {1,4,5,6,8,10,12,13,14,23};
    int target = 15;
    int i=0,j=9;
    while(i<j){
        if(arr[i]+arr[j] == target) {
            printf("[%d,%d]",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j] > target){
            j--;
        }
        else{
            i++;
        }
    }


    return 0;
}