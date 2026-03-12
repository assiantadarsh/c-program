#include<stdio.h>
int main(){
/*Count the number of elements in given array 
greator than a given number x ?
 solve the given problem .
*/
int arr[5] = {-100,5,7,8,-456789};
int x,count =0;

printf("enter the integer value of X:");
scanf("%d",&x);
for(int i=0;i<=4;i++){
    if(x<arr[i]){
        count = count +1;
    }
}
printf("the number is greator than x : %d",count);

return 0;
}