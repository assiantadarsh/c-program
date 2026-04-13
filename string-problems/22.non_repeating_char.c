#include<stdio.h>
#include<string.h>
int main(){

    // Que -> First non-repeating character

    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    for(int i = 0;str[i] !='\0';i++){
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
            int isrepeated = 1;
            for(int j = i+1;str[j] != '\0';j++){
                if(str[i] == str[j]){
                    isrepeated = 0;
                    break;
                } 
            }
            if(isrepeated == 1){
                printf("First non repeating character : %c",str[i]);
                break;
            }
        }
    }

    return 0;
}
