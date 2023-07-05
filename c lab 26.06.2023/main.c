#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Practical 5
    //Section A
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
    sum=sum=-1;
    printf("Sum of the entered  numbers %d ",sum);

    //13
    int x,arr[10];
    printf("Input 10 elements in the array \n");
    for(x=0;x<10;x++)
    {
	    printf("element %d ",x);
        scanf("%d",&arr[x]);
    }

    printf("Elements in array are: ");
    for(x=0;x<10;x++)
    {
        printf("%d",arr[x]);
    }
    printf("\n");

    //14
    int no[10],count=1;
    do
    {
        printf("Enter %d number :",count);
        scanf("%d",&no[10]);
        count++;
    }while(count<=10);
    for(count=1;count<10;count++);
    printf("The %d is %d\n",count,no[10]);

    //Section B
    //1
    int limit,num,p=0,n=0,z=0;
    printf("Enter the limit\n");
    scanf("%d",&limit);

    printf("Enter %d numbers\n",limit);
    while(limit)
    {
        scanf("%d", &num);
        if(num > 0)
        {
            p++;
        }
        else if(num < 0)
        {
            n++;
        }
        else
        {
            z++;
        }

        limit--;
    }
    printf("Positive Numbers %d \n",p);
    printf("Negative Numbers %d \n",n);
    printf("Number of zero %d \n",z);

    //2
    float avg;
    int i,n,count=0,sum=0,num,min,max;
    printf("Please enter the number of subjects ");
    scanf("%d",&n);
    printf("Please enter %d numbers ",n);
    while(count<n)
    {
        min=0;
        max=0;
            if(num>max)
               max=num;
            if(num<min)
               min=num;
            scanf("%d",&num);
        sum=sum+num;
        count++;
    }
        avg= 1.0*sum/n;
    printf("Average is %.2f \n",avg);
    printf("Maximum number is %d \n",max);
    printf("Minimum number is %d \n",min);

    //3
    int i,n,sum=0;
	float avg;
	printf("Enter the 10 numbers \n");
	for (i=1;i<=10;i++)
	{
                printf("Number-%d ",i);
        scanf("%d",&n);
		sum +=n;
	}
	avg=sum/10.0;
	printf("The sum is %d \n",sum);
	printf("Average is %f \n",avg);

	//4
	int empno,bs,count=0;
    while (1) {
        printf("Employee number: ");
        scanf("%d",&empno);

        if (empno==-999) {
            break;
        }

        printf("Basic salary ");
        scanf("%d",&bs);

        if (bs>=5000) {
            count++;
        }
    }
    printf("Number of employees %d\n", count);

    //5
    int empno=0,ttl;
    float hours,o,p;
    while(empno!=-999){
        printf("Enter the employee no ");
        scanf("%d",&empno);
        printf("Enter the No of hours ");
        scanf("%f",&hours);
        if(hours<40){
            o=hours*150.00;
        }
        else
            o=((hours-40)*200)+(hours*150.00);
        if(o>4000){
            p+=1;
            ttl+=1;
        }
        else
            ttl+=1;
    }
    printf("Employee no %d \n",empno);
    printf("Over time payment: %.2f\n",o);
    printf("Percentage of employees %.2f%%\n\n",(p/ttl)*100);

    return 0;
}
