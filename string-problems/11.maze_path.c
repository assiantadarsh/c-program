#include<stdio.h>

int maze(int cr,int cc,int er,int ec){
    int rightways = 0;
    int leftways = 0;
 
    if(cr == er && cc == ec) return 1;

    if(cr == er){   // Only Right ways call
        rightways += maze(cr,cc+1,er,ec);
    } 

    if(cc == ec){   // On;y Left ways call
        leftways += maze(cr+1,cc,er,ec);
    }

    if(cr < er && cc < ec){     // both ways call
        rightways += maze(cr,cc+1,er,ec);
        leftways += maze(cr+1,cc,er,ec);
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

    int no_of_ways = maze(1,1,n,m);
    printf("Number of ways : %d",no_of_ways);

    return 0;
}