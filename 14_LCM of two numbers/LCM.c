
// we know L.C.M = (NUM_1 * NUM_2)/H.C.F.

#include<stdio.h>

int hcf(int a, int b){
    if (a == 0){
        return b;
    }else{
        return hcf(b%a, a);
    }
}

int lcm(int a, int b){
    return (a*b) / hcf(a, b);
}

int main(int argc, char const *argv[])
{
    int num1, num2;

    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number second: ");
    scanf("%d", &num2);

    printf("LCM of given number is: %d", lcm(num1, num2));
    return 0;
}
