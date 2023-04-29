#include <stdio.h>

int main(void){
    printf("\n Currency converter - Nigerian Naira\n");
    int response;
    //The conversion values may not be recent
    float nairaToKwacha = 35.11f;
    float nairaTosudanesePound = 20.04f;
    float kwachaToNaira = 23.67f;
    float kwachaToPound = 30.13f;
    float sudanesePoundToNaira = 0.79f;
    float sudanesePoundToKwacha = 0.033f;
    float nigeriaNaira = 0, zambianKwacha = 0, sudanesepound = 0;

    printf("Choose currency to convert\n");
    printf(" 1. Nigerian Naira\n 2. Sudanese pound \n 3. Zambian Kwacha\n");
    scanf("%d", &response);

    switch(response){
        case 1:
    printf("\nEnter an amount in Nigerian Naira to be converted: ");
    scanf("%f", &nigeriaNaira);
    zambianKwacha = nigeriaNaira/nairaToKwacha;
    sudanesepound = nigeriaNaira/nairaTosudanesePound;

    printf("\n Your Money in Zambian Kwacha is : %.2fZK", zambianKwacha);
    printf("\n Your Money in Sudanese pound is : %.2fSD\n", sudanesepound);
    break;
        case 2:

    /*The modification
    Update program to be able to convert to other currencies*/
    printf("\nEnter an amount in Sudanese pound to be converted: ");
    scanf("%f", &sudanesepound);
    zambianKwacha = sudanesepound*sudanesePoundToKwacha;
    nigeriaNaira = sudanesepound*sudanesePoundToNaira;

    printf("\n Your Money in Zambian Kwacha is : %.2fZK", zambianKwacha);
    printf("\n Your Money in Nigerian Naira is : %.2fNGN\n", nigeriaNaira);
    break;
        case 3:
    printf("\nEnter an amount in Zambian Kwacha to be converted: ");
    scanf("%f", &zambianKwacha);
    sudanesepound = zambianKwacha*kwachaToPound;
    nigeriaNaira = zambianKwacha*kwachaToNaira;

    printf("\n Your Money in Sudanese pound is : %.2fSD", sudanesepound);
    printf("\n Your Money in Nigerian Naira is : %.2fNGN\n", nigeriaNaira);
            break;
        default:
            printf("You din not choose correctly!");
    }


    return 0;

}
