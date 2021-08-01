#include<stdio.h>

int power(int a, int b){
    int pow = 1;
    for(int j=0; j<b; j++){
        pow = pow*a;
    }
    return pow;
}

int main()
{
    int binary, decimal, temp;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    for(int i=0; binary != 0; i++){

        temp = binary%10;
        binary = binary/10;
        decimal = power(2, i) * temp + decimal;
    }

    printf("Decimal number is: %d", decimal);
    return 0;
}
