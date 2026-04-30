#include<stdio.h>

int maze(int n,int m){
    int rightways = 0;
    int leftways = 0;
    if(n == 1 && m == 1) return 1;
    if(n == 1){         // Cannot go down

        rightways += maze(n,m-1);
    }
    if(m == 1){ // Cnanot go right
        leftways += maze(n - 1,m);
    }

    if(n > 1 && m > 1){
        rightways += maze(n,m-1);
        leftways += maze(n - 1,m);
    }
    int totalways = rightways + leftways;
    return totalways;

}
int main(){

    int n;
    printf("Enter the row of the maze : ");
    scanf("%d",&n);

    int m;
    printf("Enter the column of the maze : ");
    scanf("%d",&m);

    int no_of_ways = maze(n,m);
    printf("Number of ways : %d",no_of_ways);

    return 0;
}