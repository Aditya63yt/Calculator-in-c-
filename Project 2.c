#include<stdio.h>
 int main()
{ float a,b;
    char op;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("Enter the operator :");
    scanf("  %c",   &op);
    switch(op)
    {
        case'-':
        printf("The difference of the two numbers is:%f",a-b);
        break;
        case'+':
        printf("The sum of the two numbers is:%f",a+b);
        break;
        case'/':
        printf("The quotient of the two numbers is:%f",a/b);
        break;
        case'*':
        printf("The product of the two numbers is:%f",a*b);
        break;

    }
    return 0;
}