#include <stdio.h>
int main(void){
    int date_of_birth = 0;
    int mum_current_age = 0;
    int mum_age;
    int your_age;
    const int CURRENT_YEAR = 2023;
    printf("Enter your date of birth\n");
    scanf("%d", &date_of_birth);
    printf("Enter your Mum's age\n");
    scanf("%d", &mum_current_age);

    your_age = (CURRENT_YEAR - date_of_birth);
    mum_age = mum_current_age - your_age;

    printf("Mum's age at your birth is : %d", mum_age);

return 0;
}