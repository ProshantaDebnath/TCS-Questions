#include<stdio.h>
#include<string.h>

int main()
{
    int i,j=0;
    char string[100];

    printf("Enter your string: ");
    gets(string);

    i = strlen(string)-1;

    for(i; i>=0; i--){

        if(!(string[j] == string[i])){
            printf("False");
            break;
        }else{
            j=j+1;
        }
        
    } 

    if(j-1 == strlen(string)-1){
        printf("True");
    }

    return 0;
}
