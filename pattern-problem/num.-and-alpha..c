#include<stdio.h>
int main(){
/*
problem-
1
A B
1 2 3
A B C D
1 2 3 4
A B C D E 
print the output ?
*/
int n;

printf("enter the value of row :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
    
{   int a=1;
    if(i%2 != 0)
        {for(int j =1; j<=i;j++)
            printf("%d ",j);}
    else
        {for(int j =1; j<=i;j++)
            {int d=a+64;
            char ch=(char)d;
            printf("%c ",ch);
            a++;         }
        }
        printf("\n");

}

return 0;
}