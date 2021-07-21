#include<stdio.h>

int main()
{
    int temp=0, numLis[10];

    printf("Enter 10 number of your choice: ");

    for(int i=0; i<=9; i++){
        scanf("%d", &numLis[i]);
    }

    for(int j=0; j<=9; j++){
        if(numLis[0] <= numLis[j]){
            temp = numLis[j];
        }
    }

    printf("Gratest number is: %d", temp);
    return 0;
}
