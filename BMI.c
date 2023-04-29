#include <stdio.h>
#include <stdlib.h>

int main(){
    char user_name[20];
    char remark[10];
    float result;
    float weight_in_pounds;
    float height_in_inches;

    printf("Hello what is your full name?\n");
    scanf("%s", &user_name);
    printf("%s Enter your weight in pounds\n", user_name);
    scanf("%f", &weight_in_pounds);
    printf("%s Enter your height in inches\n", user_name);
    scanf("%f", &height_in_inches);

    result = (weight_in_pounds * 703)/(height_in_inches*height_in_inches);

    if(result < 18.5){
        printf("Underweight");
    }
    else if(result >= 18.5 && result <= 24.9){
        printf("Normal");
    }
    else if(result >= 25 && result <= 29.99){
        printf("Overweight");
    }
    else{
        printf("Obese");
    }

    printf("**Body Mass Index Calculator**\n Name: %s \n BMI Result: %.1f \n Remark: %s\n", user_name, result, remark);
    return 0;
}
