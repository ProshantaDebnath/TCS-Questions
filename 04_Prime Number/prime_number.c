#include <stdio.h>

int main()
{

    int num, i, j, r1, r2, flag;

    // Program for checking number is prime or not

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num != 1)
    {

        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            printf("Number is prime \n");
        }
        else
        {
            printf("Not a prime number. \n");
        }
    }
    else
    {
        printf("Not a prime number \n");
    }

    // Program for printing prime number in a given range.

    printf("Enter lower bound: ");
    scanf("%d", &r1);

    printf("Enter upper bound: ");
    scanf("%d", &r2);

    if (r2 < r1)
    {
        printf("Invalid range!");
    }
    else
    {
        for (i = r1; i <= r2; i++)
        {

            flag = 1;
            if (i != 1)
            {
                for (j = 2; j < i; j++)
                {

                    if (i % j == 0)
                    {
                        flag = 0;
                        break;
                    }
                }

                if (flag == 1)
                {
                    printf("%d", i);
                }
            }
        }
    }

    return 0;
}
