#include<stdio.h>
#include<math.h>
int main()
{
    int dig;
    printf("Enter a digit between 0 - 9: ");
    scanf("%d",&dig);

    //printf("English Translation: ");
    switch(dig)
    {
        case 1:
        printf("ONE");
        break;
        
        case 2:
        printf("TWO");
        break;
        
        case 3:
        printf("THREE");
        break;

        case 4:
        printf("FOUR");
        break;

        case 5:
        printf("FIVE");
        break;

        case 6:
        printf("SIX");
        break;

        case 7:
        printf("SEVEN");
        break;

        case 8:
        printf("EIGHT");
        break;

        case 9:
        printf("NINE");
        break;

        case 0:
        printf("ZERO");
        break;

        default:
        printf("Enter Digits Between 0 to 9");
    }
}