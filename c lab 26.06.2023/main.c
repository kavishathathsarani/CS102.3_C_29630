#include <stdio.h>
#include <math.h>

int main()
{
    // practical 1
    //1
    int n1,n2,max;
    printf("Enter two numbers ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    max=n1;
    else
    max=n2;
    printf("The highest number %d \n",max);

    //2
    int num1,num2,num3,large,smalle;
    printf("Enter three numbers ");
    scanf("%d %d %d",&num1,&num2,&num3);
    large=num1;
    smalle=num1;
    if(num2>large)
    large=num2;
    if(num3>large)
    large=num3;
    if(num2<smalle)
    smalle=num2;
    if(num3<smalle)
    smalle=num3;
    printf("The largest number is %d \n",large);
    printf("The smallest number is %d \n",smalle);

    //3
    char empname[20];
    float bs,inc,ns;
    printf("Enter employee name ");
    scanf(" %s",&empname);
    printf("Enter basic salary ");
    scanf("%f",&bs);
    if(bs<=5000)
    inc=0.05*bs;
    else if (5000<=bs<10000)
    inc=0.1*bs;
    else{
    inc=0.15*bs;
    }
    ns=bs+inc;
    printf("Employee name %s \n",empname);
    printf("New salary %.2f \n",ns);

    //4
    double r,d,c,a;
    double PI=M_PI;
    printf("Enter the radius of a circle ");
    scanf("%lf",&r);
    d=2*r;
    c=2*PI*r;
    a=PI*r*r;
    printf("diameter: %.2f \n",d);
    printf("circumference: %.2f \n",c);
    printf("area: %.2f \n",a);

    //5
    int number1,number2;
    printf("Enter two numbers ");
    scanf("%d %d",&number1,&number2);
    if(number1!=0 && number1%number2==0)
    printf("%d is a multiple of %d \n",number1,number2);
    else
    printf("%d is not a multiple of %d \n",number1,number2);

    //6
    printf("%d\n",'A');
    printf("%d\n",'B');
    printf("%d\n",'C');
    printf("%d\n",'a');
    printf("%d\n",'b');
    printf("%d\n",'c');
    printf("%d\n",'0');
    printf("%d\n",'1');
    printf("%d\n",'2');
    printf("%d\n",'$');
    printf("%d\n",'*');
    printf("%d\n",'+');
    printf("%d\n",'/');

    //7
    char name[20],city;
    float b_salary,service_years,m_sales,a_allowance,bonus,g_remuneration ;
    printf("Enter the sales persons name: ");
    scanf("%s",&name);
    printf("Enter the basic salary: ");
    scanf("%f",&b_salary);
    printf("service years: ");
    scanf("%f",&service_years);
    printf("Enter the city: ");
    scanf("%s",&city);
    printf("Enter the monthly sales: ");
    scanf("%f",&m_sales);
    if(m_sales>=50000)
    {
     bonus = 0.15* m_sales;
    }
    else if (m_sales<=25000)
    {
     bonus = 0.1* m_sales;
    }
    else
    {
     bonus = 0.12* m_sales;
    }
    switch(city)
    {
        case'c':a_allowance = 2500;break;
        default:a_allowance = 0;
    }
    service_years=5;
    if(service_years>5)
    {
      a_allowance = 0.1*b_salary;
    }
    g_remuneration = b_salary + a_allowance + bonus;
    printf("gross remuneration : %.2f" ,g_remuneration);

    return 0;
}
