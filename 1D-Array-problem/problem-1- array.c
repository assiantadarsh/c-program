#include<stdio.h>
int main(){
    /*
   given an array of marks of students if the mark of any student 
   is less than 35 print itss roll number .[roll no. here refers to the index of the array .]
    */
int marks[10] = {13,45,87,98,96,100,32,32,12,10};

for(int i=0;i<=9;i++){
    if(marks[i]<35)
        {printf("%d ",i);}
}

return 0;
}