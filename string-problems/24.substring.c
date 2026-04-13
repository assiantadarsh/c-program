#include<stdio.h>
#include<string.h>
int main(){

    // Que -> String compression .

    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    for(int i = 0;str[i] != '\0';i++){
        char current[100] = "";
        int k = 0;
        for(int j = i;str[j] != '\0';j++){
            current[k++] = str[j];
            printf("%s\n",current);

        }
    }
    return 0;
}
