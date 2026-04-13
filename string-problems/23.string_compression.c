#include<stdio.h>
#include<string.h>
int main(){

    // Que -> String compression .

    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    for(int i = 0;str[i] !='\0';i++){
        if(str[i] == ' ') continue;
        int visited = 0;

        // reverse character check
        
        for(int k = 0;k<i;k++){
            if(str[i] == str[k]){
                visited = 1;
                break;
            }
        }

        if(visited == 1) continue;
        else{
            int count = 0;
            for(int j = 0;str[j] != '\0';j++){
                if(str[i] == str[j]){
                    count++;
                }
            }
            printf("%c%d",str[i],count);
        }
    }

    return 0;
}
