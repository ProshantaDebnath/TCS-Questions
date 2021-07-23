# include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, temp1=0, temp2, temp3;

    printf("Enter your number: ");
    scanf("%d", &num);

    temp2 = num;

    while(temp2 != 0){
        temp1 = temp2%10;
        temp2 = temp2/10;
        temp3 = (temp1 * temp1 * temp1) + temp3;
    }

    if(temp3 == num){
        printf("Number is armstrong!");
    }else{
        printf("Number is not armstrong");
    }
    
    return 0;
}
