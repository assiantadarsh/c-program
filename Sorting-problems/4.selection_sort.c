#include<stdio.h>
int main(){
    int n = 5,temp;
    int arr[5] = {5,4,3,2,1};

    for(int i = 0;i<n-1;i++){
        int min = arr[i];
        int minidx = -1;

        for(int j = i;j<=n-1;j++){
            if(min > arr[j]){
                min = arr[j];
                minidx = j;
            }
            // Swap 

            temp = arr[minidx];
            arr[minidx] = arr[i];
            arr[i] = temp;
        }
    }
    for(int i = 0; i<n;i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}