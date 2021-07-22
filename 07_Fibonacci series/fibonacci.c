# include<stdio.h>

int main()
{
    int num, temp, a = 0, b = 1;

    printf("Enter upper bound");
    scanf("%d", &num);
    printf("%d %d ", a, b);

    for(int i=0; i<num; i++){
        temp = a+b;
        printf("%d ", temp);
        a=b;
        b=temp;
    }
    return 0;
}
