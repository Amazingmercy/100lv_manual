#include <stdio.h>
#include <math.h>

void physics(){
    int response;
    int mass, acceleration;
    int distance, time;
    int velocity;
    int force, momentum;
printf("Choose a formula \n 1. Force \n 2. Velocity \n 3. Momentum");
scanf("%d", &response);
if(response == 1){
    printf("Enter mass of object");
    scanf("%d",&mass);
    printf("Enter acceleration of object");
    scanf("%d",&acceleration);
    force = mass * acceleration;
    printf("The Force: %dN", force);
}
else if(response == 2){
    printf("Enter the distance");
    scanf("%d",&distance);
    printf("Enter the time taken");
    scanf("%d",&time);
    velocity = distance/time;
    printf("The Velocity: %dm/s", velocity);
}
else if(response == 3){
    printf("Enter the mass of object");
    scanf("%d",&mass);
    printf("Enter the velocity of object");
    scanf("%d",&velocity);
    momentum = mass*velocity;
    printf("The Momemtum: %dkgm/s", momentum);
}
else{
    printf("You did not choose correctly!");
}
}
