#include <stdio.h>

int main () {

    long long int a, temp;
    int flag = 1;

    printf("Enter number: ");
    scanf("%lld", &a);

    printf("Reverse number is ");

    while(flag != 0){
        temp = a%10;
        a = a/10;
        printf("%d", temp);
        if(a == 0){
            flag = 0;
        }
    }

    return 0;
}