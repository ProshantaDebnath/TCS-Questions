#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum=0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num != 0){
        sum = num%10 + sum;
        num = num/10;
    }

    printf("Sum of all digits are: %d", sum);
    return 0;
}
