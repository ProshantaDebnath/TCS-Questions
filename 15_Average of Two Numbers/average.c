#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a,b;

    printf("Enter A & B: ");
    scanf("%f %f", &a, &b);

    printf("Average: %.2f", (a+b)/2);
    return 0;
}
