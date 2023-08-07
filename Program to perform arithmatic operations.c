//Program to perform Arithmatic operations.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    int sum,sub,mul;
    float div;

    printf("\n****************************************\n");
    printf(" Perform the arithmetic operations\n");

    printf("\n Enter two numbers :\n");
    scanf(" %d%d",&a,&b);

    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    printf("\n The results of arithmetic operations are :\n");

    printf("\n sum = %d",sum);
    printf("\n sub = %d",sub);
    printf("\n mul = %d",mul);
    printf("\n div = %d",div);

    printf("\n****************************************\n");

    getch();
}
