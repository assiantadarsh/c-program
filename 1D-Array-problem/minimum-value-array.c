#include<stdio.h>
int main()
    /*
    find the minimum value out of all the elements 
    in the array ?
    */
    {
    int arr[7] = {3,5,7,8,9,7,7};
    int min = arr[0];
    for(int i=0;i<7;i++){
        if(min >arr[i]){
            min = arr[i];
        }
    }
     
    printf("minimum number of array :%d ",min);
    
    return 0;
}