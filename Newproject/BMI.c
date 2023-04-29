#include <stdio.h>

int main(){
    char user_name[50];
    char remark[15];
    float result;
    float weight_in_pounds;
    float height_in_inches;

    printf("Hello what is your full name?\n");
    fgets (user_name, 20, stdin);
    printf("Enter your weight in pounds\n", user_name);
    scanf("%f", &weight_in_pounds);
    printf("Enter your height in inches\n", user_name);
    scanf("%f", &height_in_inches);

    result = (weight_in_pounds * 703)/(height_in_inches*height_in_inches);

    if(result < 18.5){
        printf("     **Body Mass Index Calculator**\n Name: %s \n BMI Result: %.1f \n Remark: Underweight\n", user_name, result);
    }
    else if(result >= 18.5 && result <= 24.9){
        printf("     **Body Mass Index Calculator**\n Name: %s \n BMI Result: %.1f \n Remark: Normal\n", user_name, result);
    }
    else if(result >= 25 && result <= 29.99){
        printf("     **Body Mass Index Calculator**\n Name: %s \n BMI Result: %.1f \n Remark: Overweight\n", user_name, result);
    }
    else{
        printf("     **Body Mass Index Calculator**\n Name: %s \n BMI Result: %.1f \n Remark: Obese\n", user_name, result);
    }



    return 0;

}

