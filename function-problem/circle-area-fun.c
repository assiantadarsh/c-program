#include<stdio.h>
int area(int r){
    int area = 3.14*r*r;
    return area;
}
int main(){
int r;
for(int i=0;i<=10;i++){
    printf("\n  enter radius of circle:");
    scanf("%d",&r);
    int p =area(r);
    printf("%d",p);

}
return 0;
}