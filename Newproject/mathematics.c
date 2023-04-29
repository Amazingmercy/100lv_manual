#include <stdio.h>
#include <math.h>

void mathematics(){
    int response;
    int length;
    int breadth;
    int radius;
    float area;
printf("Choose a formula \n 1. Area of Rectangle \n 2. Area of square \n 3. Area of circle");
scanf("%d", &response);
if(response == 1){
    printf("Enter length of rectangle");
    scanf("%d",&length);
    printf("Enter Breadth of rectangle");
    scanf("%d",&breadth);
    area = length * breadth;
    printf("Area: %.1f", area);
}
else if(response == 2){
    printf("Enter length of Square");
    scanf("%d",&length);
    area = length * length;
    printf("Area: %.1f", area);
}
else if(response == 3){
    printf("Enter radius of circle");
    scanf("%d",&radius);
    area = 22.7 * radius * radius;
    printf("Area: %.1f", area);
}
else{
    printf("You did not choose correctly!");
}

}
