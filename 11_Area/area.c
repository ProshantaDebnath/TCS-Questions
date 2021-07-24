#include<stdio.h>

int main()
{
    float num;

    printf("Enter Radius: ");
    scanf("%f", &num);

    printf("Area for given radius is: %.2f", 3.14*num*num); //%.2f will handle precision upto 2 decimal places.
    return 0;
}
