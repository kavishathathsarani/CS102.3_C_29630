//practical 1
//1
 #include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kavisha Thathsarani \n");
    printf("Kegalle Balika Vidyalya");

    return 0;
}

//2.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("*\n **\n ***\n ****\n *****\n");
    return 0;
}

//3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intValue;
    float floatValue;
    double doubleValue;
    char charValue;
    printf("Enter an integer value: ");
    scanf("%d",&intValue);
    printf("Enter a float value: ");
    scanf("%f",&floatValue);
    printf("Enter a double value: ");
    scanf("%if",&doubleValue);
    printf("Enter a character value: ");
    scanf("%s",&charValue);
    printf("Integer value: %d \n", intValue);
    printf("Float value: %.2f \n", floatValue);
    printf("Double value: %.2f \n", doubleValue);
    printf("Character value: %c\n", charValue);

    return 0;
}



//4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,total;
    printf("Enter First Number ");
    scanf("%d",&no1);
    printf("Enter Second Number ");
    scanf("%d",&no2);
    total=no1+no2;
    printf("The total is %d",total);
    return 0;
}

//5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float no1,no2,avg;
    printf("Enter First Number ");
    scanf("%f",&no1);
    printf("Enter Second Number ");
    scanf("%f",&no2);
    avg=no1+no2/2;
    printf("The avarage is %.2f",avg);
    return 0;
}

//6
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    int byear,age;
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your birth year: ");
    scanf("%d",&byear);
    age=2023-byear                                        ;
    printf("Student name is %s \n",name);
    printf("Age is %d \n",age);
    return 0;
}




//7
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;
    printf("Enter first number ");
    scanf("%d",&no1);
    printf("Enter second number ");
    scanf("%d",&no2);
    printf("Before swap %d %d \n",no1,no2);
    printf("After swap %d %d \n",no2,no1);

    return 0;
}





