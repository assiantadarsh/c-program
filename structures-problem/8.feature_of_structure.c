#include<stdio.h>
#include<string.h>


int main(){

typedef struct pokemon{
        int hp;
        int speed;
        char tier;
        char name[15];
    }pokemon;

    pokemon  a,b,c;
    a.hp = 23;
    strcpy(a.name,"Charizard");
    a.speed = 234;
    a.tier = 'A';

    b = a;  // Deep copy
    c = a;
    

    printf("%d\n",b.speed);
    printf("%s",c.name);

}