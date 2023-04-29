#include <stdio.h>
#include <math.h>

int main()
{
    //Declaring variables
    int principal = 1000;
    float rate = 0.05;
    int time = 10;
    float power_value;
    float amount;

    power_value = pow((1 + rate), time);
    amount = principal * power_value;
    printf("The total amount for %d years is: $%.2f",time,amount);
    //printf("%f", rate);





    return 0;
}