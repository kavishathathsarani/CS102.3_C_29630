#include <stdio.h>
#include <stdlib.h>

int main()
{
  //practical 4
  //1
  int num1;
  printf("Enter a number : ");
  scanf("%d",&num1);
  if (num1%2==0)
  printf ("%d is an even number", num1);
  else
 {
   printf ("%d is an odd number", num1);
 }

//switch//
  int no;
  printf ("Enter a number ");
  scanf ("%d",&no);
  switch (no%2)
  {
  case 0: printf ("%d is an even number", no); break;
  case 1: printf ("%d is an odd number", no); break;
  default: printf("%d is an invalid input",no);
  }

  //2
  int n1, n2, opt, add, sub, mul;
  float div;
  printf ("Enter two numbers : ");
  scanf ("%d %d",&n1,&n2) ;
  printf (" 1-addition\n 2-subtraction\n 3-multiplication\n 4-division\n ");
  printf ("select the operator :");
  scanf("%d",&opt);
  switch (opt)
  {
  case 1:printf("Addition is %d",add,add=n1+n2);break;
  case 2:printf("Subtraction IS %d",sub,sub=n1-n2) ;break;
  case 3:printf("Multiplication is %d",mul,mul=n1*n2) ;break;
  case 4:printf("Division is %.2f",div=n1/n2) ; break;
  default:printf("Invalid operator");
  }

  //3
  int r;
  char ch;
  const float PI=3.14159;
  float A, C, V ;
  printf("C-circumference of a circle\n A-area of a circle\n V-volume of a sphere\n");
  printf("Choose a type: ");
  scanf ("%s",&ch);
  printf ("Enter radius: ");
  scanf("%d",&r);
  switch(ch)
  {
    case 'A':printf("Area of a circle = %.2f",A,A-PI*r*r);break;
    case 'C':printf("Circumference of a circle=%.2f",C,C=2*PI*r);break;
    case 'V':printf("Volume of a sphere =%.2f",V,V=(4*PI*r*r*r)/3);break;
    default:printf("Invalid value");
  }

  //4
    char l;
    printf("Enter a character ");
    scanf("%c",&l);
    switch(l)
    {
        case 'A':printf("%c is a vowel ",l);break;
        case 'a':printf("%c is a vowel ",l);break;
        case 'E':printf("%c is a vowel ",l);break;
        case 'e':printf("%c is a vowel ",l);break;
        case 'I':printf("%c is a vowel ",l);break;
        case 'i':printf("%c is a vowel ",l);break;
        case 'O':printf("%c is a vowel ",l);break;
        case 'o':printf("%c is a vowel ",l);break;
        case 'U':printf("%c is a vowel ",l);break;
        case 'u':printf("%c is a vowel ",l);break;
        default:printf("%c is not a vowel ",l);break;}

  //5
  int m_no;
  printf("Enter a month number ");
  scanf("%d",&m_no);
  switch(m_no)
  {
    case 1:printf("January has 31 days");break;
    case 2:printf("February has 28 days");break;
    case 3:printf("March has 31 days");break;
    case 4:printf("April has 30 days");break;
    case 5:printf("May has 31 days");break;
    case 6:printf("June has 30 days");break;
    case 7:printf("July has 31 days");break;
    case 8:printf("August has 31 days");break;
    case 9:printf("September has 30 days");break;
    case 10:printf("October has 31 days");break;
    case 11:printf("November has 30 days");break;
    case 12:printf("December has 31 days");break;
    default:printf("Invalid month number");break;}

  return 0;
}
