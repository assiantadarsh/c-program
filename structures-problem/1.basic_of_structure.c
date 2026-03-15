#include<stdio.h>
int main(){
    struct pokemon{         // user defined data type
        int hp;
        int attack;
        int speed;
        char tier;
    };
    struct pokemon pikachu; 

    pikachu.attack = 60;
    pikachu.hp = 45;
    pikachu.speed = 130;
    pikachu.tier = 'A';

    printf("%d",pikachu.attack);

    return 0;
}