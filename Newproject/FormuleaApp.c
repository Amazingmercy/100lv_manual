#include <stdio.h>
#include <math.h>
#include "mathematics.c"
#include "physics.c"
#include "statistics.c"

int user_Interface();
void response();

int main(){
int response;
response = user_Interface();
    switch(response){
case 1:
    mathematics();
    break;
case 2:
    statistics();
    break;
case 3:
    physics();
    break;
default:
    printf("You did not Choose correctly!\n");
    the_response();
    break;
}
return 0;
}
//i want this to be a loop whenever user did not choose correctly
void the_response(){
    int response2;
printf("Do you want to continue?\n 1. Yes \t 2. No");
scanf("%d",&response2);
if(response2 == 1){
user_Interface();
}
else{
    printf("\nThank you for using this Application!\n");
}

}

int user_Interface(){
    int answer;
    printf("\n     **MY FORMULEA APP**");
    printf("\nHELLO WELCOME TO MY FORMULEA APP\n Choose your subject of interest below\n 1. Mathematics\n 2. statistics\n 3. Physics");
    scanf("%d", &answer);
    printf("\n");
    return answer;
}





