#include<stdio.h>
#include<stdbool.h>
// Find the unique number in a given array where all the 
// Elements are being repeated twice with one value being unique.
int main(){
   int arr[7] = {5,6,2,4,2,6,4};
   
    for(int i=0;i<7;i++){
        bool flag = false;
        for(int j=i+1;j<7;j++){
            if(arr[i] == arr[j]){
                flag = true;
            }
        }
        if(flag== false){
            printf("the unique element is %d ",arr[i]);
            break;}}
    
    return 0;
}