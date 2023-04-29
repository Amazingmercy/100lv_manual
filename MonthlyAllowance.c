#include <stdio.h>
int main(){
    //declaring variables

    float allowance = 0;
    float data_subscription_percent = 15;
    float data_subscription_amount = 0;

    printf("\nEnter the amount of money you have as allowance: ");
    scanf("%f", &allowance);

    //The modification
    printf("\nEnter the percent of data you use: ");
    scanf("%f", &data_subscription_percent);

    data_subscription_amount = (data_subscription_percent/100)*allowance;
    printf("\nYour Internet data subscription amount is: %.2f", data_subscription_amount);

    return 0;
}
