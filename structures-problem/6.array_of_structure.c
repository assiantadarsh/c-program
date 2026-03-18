#include<stdio.h>
#include<string.h>


int main(){

typedef struct pokemon{
        int hp;
        int speed;
        char tier;
        char name[15];
    }a;
    a arr[3];
    arr[0].hp = 45;
    arr[0].speed = 56;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Charizard");

    arr[1].hp = 645;
    arr[1].speed = 956;
    arr[1].tier = 'A';
    strcpy(arr[1].name,"bablassur");


    arr[2].hp = 345;
    arr[2].speed = 556;
    arr[2].tier = 'u';
    strcpy(arr[2].name,"Hitachi");

    for(int i=0;i<3;i++){
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
        printf("%s\n\n",arr[i].name);
    }
}
