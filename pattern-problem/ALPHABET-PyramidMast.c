#include<stdio.h>
// print this pattern
// ABCDEFGHIJK
// ABCDE GHIJK
// ABCD   HIJK
// ABC     IJK
// AB       JK
// A         K
int main(){
    int n;

    printf("enter the number of lines:");
    scanf("%d",&n);
    int num = n;
    int nsp=1;
    int s = n + (2*1);
    for(int i=1;i<=(2*n)+1;i++){
        int d = i + 64;
        char ch = (char)d;  // Character Type casting
        printf("%c",ch);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=num;j++){
            int d = j+64;
            char ch = (char)d;
            printf("%c",ch);
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=s;j<=(2*n)+1;j++){
            int u = j + 64; 
            char ch = (char)u;
            printf("%c",ch);
        }
        printf("\n");
        num--;
        nsp +=2;
        s++;
    }
   
    return 0;
}