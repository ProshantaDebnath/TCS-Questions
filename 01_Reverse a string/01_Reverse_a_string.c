#include<stdio.h>
#include<string.h>

int main() {

    char str[100];
    int i;

    printf("Enter your string you want to print reverse: ");
    gets(str);
    printf("Your entered string: %s \n", str);
    i = strlen(str)-1;

    printf("Reverse Sting is: ");

    for(i; i>=0; i--){
        printf("%c", str[i]);
    }

    return 0;
}