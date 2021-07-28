#include<stdio.h>
#include<string.h> // Used in second i.e. Method_2.

int main(int argc, char const *argv[])
{
    char a[100];
    char b[100];

    int i = 0, j = 0;

    // Method_1 without using string.h library.

    printf("Enter str1: ");
    gets(a);

    printf("Enter str2: ");
    gets(b);

    while(a[i] != '\0'){

        i = i+1;
    }

    a[i] = ' ';
    i++;

    while(b[j] != '\0'){
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';
    i = 0;

    printf("Concatenated sting: ");
    
    while(a[i] != '\0'){
        printf("%c", a[i]);
        i++;
    }

    // Method_2 Using string.h library.

    return 0;
}
