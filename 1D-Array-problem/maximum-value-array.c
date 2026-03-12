#include<stdio.h>
int main()
    /*
    find the maximum value out of all the elements 
    in the array ?
    */
    {
    int arr[7] = {3,5,7,8,9,7,7};
   
    int max = arr[0];
    for(int i=0;i<7;i++){
        if(max <arr[i]){
            max = arr[i];}}
    printf("maximum number of array :%d ",max);
   
    return 0;
}