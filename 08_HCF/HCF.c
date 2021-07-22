#include<stdio.h>

int HCF(int a, int b){
    if(a==0){
        return b;
    }else{
        return HCF(b%a, a);
    }
}

int main()
{
    int num1, num2, hcf;
    printf("First number: ");
    scanf("%d", &num1);

    printf("Second number: ");
    scanf("%d", &num2);

    printf("%d %d", num1, num2);

    hcf = HCF(num1, num2);

    printf("Hcf of given no is: %d", hcf);
    return 0;
}
