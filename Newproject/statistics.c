#include <stdio.h>
#include <math.h>
#define SIZE 100
void statistics(){
    int response;
    int array[50];
    int num;
    float deviation;
    int h_num;
    int l_num;
    float mean, std_deviation, range;

printf("Choose a formula \n 1. Mean \n 2. Standard deviation  \n 3. Range");
scanf("%d", &response);
if(response == 1){
   int i, n, sum = 0;
   int data[ SIZE ];
   float mean;

   printf("Enter the number of data items: ");
   scanf("%d", &n);

   if (n > SIZE || n <= 0)
   {
      printf("Error!!! Please enter the number in range of (0 - 100): ");
      scanf("%d", &n);
   }

   //taking data items from user
   printf("Enter data (Each on a new line):\n");
   for (i = 0; i < n; ++i)
   {
      scanf("%d", &data[ i ]);
      sum += data[ i ];
   }

   mean = sum / (float)n;
   printf("Mean: %.2f", mean);

}

else if(response == 2){
    printf("Enter the deviation");
    scanf("%f", &deviation);
    std_deviation = sqrt(deviation);
    printf("The Standard Deviation: %.2f", std_deviation);
}
else if(response == 3){
        printf("Enter Highest number");
        scanf("%d",&h_num);
        printf("Enter Lowest number");
        scanf("%d",&l_num);
        range = h_num - l_num;
        printf("The range: %d",range);

}
else{
    printf("You did not choose correctly!");
}

}
