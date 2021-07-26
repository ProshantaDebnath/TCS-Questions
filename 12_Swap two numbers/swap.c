// Swapping content of two variables without using any other variable.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    printf("Initial A: %d B: %d\n", a, b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Final A: %d B: %d", a, b);
    return 0;
}

