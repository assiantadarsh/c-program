#include<stdio.h>


int main(){

printf("************GAME STONE PAPER SCISSORS****************\n");
char p1 ,p2;

printf("s for stone c for scissors and p for paper \n");
printf("enter first player choice:");
scanf("%s",&p1);
printf("enetr second player choice: ");
scanf("%s",&p2);

if(p1 == p2)

    printf("it's drawn");

else if( (p1=='s' && p2 == 'p') ||
        (p1 == 'c' && p2 == 'p') ||
        (p1 == 's' && p2 == 'c'))
        printf("player1 is win:");
else
    printf("player2 is win:");





}