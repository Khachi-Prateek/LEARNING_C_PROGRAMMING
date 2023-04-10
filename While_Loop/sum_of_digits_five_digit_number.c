#include<stdio.h>
int main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);

    int sum=0;
    int rem=0;
    while(a>0)
    {
        rem=a%10;
        sum = sum+rem;
        a=a/10;
    }
    printf("%d", sum);
}
