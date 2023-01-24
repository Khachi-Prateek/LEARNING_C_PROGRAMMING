#include<stdio.h>

int main()
{
    char op;
    printf("Enter the operation = ");
    scanf("%c",&op);

    float a,b;
    printf("Enter First Number = ");
    scanf("%f",&a);
    printf("Enter Second Number = ");
    scanf("%f",&b);

    switch(op)
    {
        case '+':
        printf("%.2f", a+b);
        break;

        case '-':
        printf("%.2f", a-b);
        break;

        case '*':
        printf("%.2f", a*b);
        break;        

        case '/':
        printf("%f", a/b);
        break;
    }

}