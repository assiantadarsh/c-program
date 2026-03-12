// #include<stdio.h>
// #include<limits.h>
/*#include<limits.h>
int main(){

//find the second largest elament in the array 

int arr[5] = {3,5,6,4,3};
int max=INT_MIN;
int smax=INT_MIN;
for(int i=0;i<=4;i++){
    if(max<arr[i]){
        max = arr[i];
    }
}
for(int i=0;i<=4;i++){
    if(smax<arr[i] && arr[i] != max){
        smax = arr[i];
    }
}
printf("%d",smax);
return 0;
}*/
//method 2

#include<stdio.h>
#include<limits.h>
// Find the second largest element in the array
int main(){
int arr[6] ={7,5,4,3,6,2};
int max =arr[0] ,smax = INT_MIN;
for(int i=0;i<=5;i++){
    if(max<arr[i]){
        smax = max;// Previous max value 
        max = arr[i];}// New max value
    else if(smax<arr[i] && max != arr[i]){
        smax = arr[i];}}

printf("%d",smax);

return 0;}

























// method 3
// #include<stdio.h>
// int main(){

//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("\nEnter array element %d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int max = arr[0];
//     int smax = arr[0];
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         if (smax<max && max != arr[i]){
//             smax = arr[i] ;
//         }
    
//     }
//     printf("The First largest element in the array is : %d",max);
//     printf("\n%d",smax);
//     return 0;
//     }