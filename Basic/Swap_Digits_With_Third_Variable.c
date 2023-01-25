#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("Enter Two Numbers= ");
    scanf("%d %d", &a,&b);
    printf("\nBefore swapping: ");
    printf("\nFirst Variable= %d \nSecond Variable= %d", a,b);

    int c = a;
    a=b;
    b=c;

    printf("\n\nAfter Swapping: \nFirst Variable= %d \nSecond Variable= %d", a,b);

}