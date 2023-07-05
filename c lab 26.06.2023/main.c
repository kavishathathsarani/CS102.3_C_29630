#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 5
     //4
    int n,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of digits: %d\n",sum);

    //5
    int n,rno=0;
    printf("Enter a number ");
    scanf("%d",&n);
    do {
        int digit=n%10;
        rno=rno*10+digit;
        n/=10;
    } while (n!= 0);
    printf("Reversed number: %d\n",rno);

    //6
    int count, power, base, result=1;
    printf ("Enter the base value ");
    scanf ("%d",&base);
    printf ("Enter the power value ");
    scanf ("%d",&power);
    for (count=1; count<=power;count++)
    {
       result=result*base;
    }
    printf("Value is %d",result);

    //7
    int num1=0,num2=1,n,count;

    printf("Fibonacci Sequence ");

    for (count=0;count<10;count++) {
        if (count<=1) {
            n=count;
        } else
        {
            n=num1+num2;
            num1=num2;
            num2=n;
        }
        printf("%d",n);
    }

    //8
    int no,mod,total=0,x;
    printf("Enter the number ");
    scanf("%d",&no);
    x=no;
    while(no)
    {
        mod=no%10;
        total=total+(mod*mod*mod);
        no=no/10;
    }
    printf("%d",no);
    if(x==total)
       printf("%d is a armstrong number ",x);
    else
       printf("%d is not a armstrong number ",x);

    //9
    char letter;
    printf("ASCII values for letters A to Z \n");
    for (letter='A';letter<='Z';letter++)
    {
        printf("%c %d\n",letter,letter);
    }

     //10
     int rows;
     printf("Enter the number of row ");
     scanf("%d",&rows);
     for(int x=1;x<=rows;x++)
     {
         for(int y=1;y<=x;y++)
         {
             printf("*");
         }
         printf("\n");
     }

    //11
    int no,count=2,prime=1;
    printf("Enter a number ");
    scanf("%d",&no);
    while(count<no)
    {
        if(no%count==0)
    {
        prime=0;
        break;
    }

        count++;
    }
    if(prime)
        printf("%d is a prime number",no);
    else
        printf("%d is not a prime number",no);

    //12
    int no,count=1;
    printf("Enter a number ");
    scanf("%d",&no);
    printf("Factors of %d \n",no);
    while(count<=no)
    {
        if(no%count==0)
        {
            printf("%d \n",count);
        }
        count++;
    }

    //12
    int sum,x;
    while(x>0){
    printf("Enter a number ");
    scanf("%d",&x);
    if(x!=1)
    sum=sum+x;
    }
    printf("Sum of the entered  numbers %d ",sum);
    return 0;
}

