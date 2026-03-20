#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the value of array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int  temp;

    for(int i= 0;i<n-1;i++){    // Number of passes
        bool flag = true; // array is sorted 

        for(int j = 0;j<n-1-i;j++){

            if(arr[j] > arr[j+1]){

                temp = arr[j];

                arr[j] = arr[j+1];

                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int i =0 ;i<n;i++){

        printf("%d ",arr[i]);

    }
    
    return 0;
}