#include<stdio.h>

//WAP to find a duplicate element from a given array of integers .
// only one element is duplicate .
int main(){
    int arr[4] ={1,2,3,3};
  
    for(int i=0;i<4;i++){
        for(int j= i+1;j<4;j++){
            if(arr[i] == arr[j]){
                printf("the duplicate element in this array is :%d and the index is (%d,%d)",arr[i],i,j);
                break;}}}
   
    return 0;
}