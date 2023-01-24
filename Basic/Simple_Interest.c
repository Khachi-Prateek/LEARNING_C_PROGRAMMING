#include<stdio.h>
#include<math.h>

int main()
{
    float P, R, T, SI;
    printf("Please type in value of Principal= ");
    scanf("%f", &P);
    printf("Please type in value of Interest= ");
    scanf("%f", &R);
    printf("Please type in value of Time= ");
    scanf("%f", &T);
    printf("SI = %.1f",(P*R*T)/100);
    return 0;
}