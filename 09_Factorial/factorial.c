# include<stdio.h>

int factorial(int a){
    int temp=1;
    while(a != 0){
        temp = temp*a;
        a = a-1;
    }

    return temp;
}

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    printf("%d", factorial(num));

    return 0;
}
