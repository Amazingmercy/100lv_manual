#include <stdio.h>

int main(){
    const float GROWTH_RATE = 0.05;
    float population = 5000;
    float prev_population;
    float new_population;
    float new_increment;
    float percentage_growth = 0;



    printf("Year \t Expected World population \t Numerical Increment \t Overall Percentage growth\n");
    for(int i = 1; i < 32; i++){
    new_population = (population*GROWTH_RATE)+population;
    prev_population = population;
    new_increment = new_population - prev_population;
   // percentage_growth = (new_increment/population)*100;

    printf(" %d \t %.1f \t\t\t   %.1f \t\t\t    %.1f%%\n",i, population,new_increment,percentage_growth);
    percentage_growth = percentage_growth + ((new_increment/population)*100);
    population = new_population;
    }
return 0;
}
