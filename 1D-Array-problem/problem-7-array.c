#include<stdio.h>
int main(){
// WAP to copy the contents of one array into another in 
// the reverse order .
    int arr[6]={1,4,3,5,7,6};
    int brr[6];
   
    for(int i=0;i<6;i++){
        brr[i] = arr[6-i-1];
        printf("%d ",brr[i]);
    }
  
return 0;
}