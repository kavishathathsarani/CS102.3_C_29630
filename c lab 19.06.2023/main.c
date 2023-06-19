#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 5
    //1
    //while loop
    int x=0;
    while(x<=100)
    {
        printf("%d",x);
        x++;
    }

    //do while loop
    int x=0;
    do
    {
        printf("%d",x);
        x++;
    }while(x<=100);

    //for loop
    int x;
    for(x=0;x<=100;x++)
    {
        printf("%d",x);
    }

    //2
    int no,counter=1,sum=0;
    float avg;
    while(counter<=10)
    {
    printf("Enter %d mark ",counter);
    scanf("%d",&no);
    sum =sum+no;
    counter++;
    avg=(float)sum /10;
    }
    printf("Total is %d \n Average is %.2f",sum,avg);
    if(avg<50)
    printf("\n Fail");
    else
    printf("\n Pass");

    //3
    int n,total=1;
    printf("Enter numer ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid input ");
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            total=i*total;
        }
    }
    {
    printf("factorial of %d is %d",n,total);
    }

    return 0;
}
