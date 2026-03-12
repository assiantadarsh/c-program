#include<stdio.h>
int main(){
/*
find the diffrence between the sum of elements at even indices to
the sum of elemnts at odd indices.
solve the problem ?
*/
int arr[8] = {1,4,5,7,6,4,3,2};
int sume = 0,sumo=0;
for(int i=0;i<8;i++){
    if(i%2==0){
        sume = sume + arr[i];} 
    else{
        sumo= sumo+arr[i];
    }}
int diffrence_sum = sume-sumo;

printf("The diffrence between the sum of even and odd indices :%d",diffrence_sum );

return 0;
}