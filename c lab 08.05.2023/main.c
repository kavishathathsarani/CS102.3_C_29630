#include <stdio.h>
#include <stdlib.h>

int main()
{
    //practical 2
    //1
    int age;
    printf("HI, HOW OLD ARE YOU? ");
    scanf("%d", &age);
    printf("WELCOME %d \n", age);
    printf("LET'S BE FRIENDS! \n");

    //2
    printf("%5d %5d %5d \n",2,4,8);
    printf("%5d %5d %5d \n",3,9,27);
    printf("%5d %5d %5d \n",4,16,64);

    //3
    float distance, time, speed;
    printf("Enter the distance traveled: ");
    scanf("%f", &distance);
    printf("Enter the time : ");
    scanf("%f", &time);
    speed = distance / time;
    printf("Average speed: %.2f ms-1 \n", speed);

    //4
    int F,C;
    printf("Enter the degrees Fahrenheit: ");
    scanf("%f",&F);
    C=(5/9)*(F - 32);
    printf("Temperature in degrees Celsius: %.2f \n", C);


    return 0;
}
