#include<stdio.h>
#include<math.h>

int main()
{
    int s1 , s2 , s3 ,s4 , s5, TM;
    float Percentage;
    printf("Subject 1: ");
    scanf("%d",&s1);
    printf("Subject 2: ");
    scanf("%d",&s2);
    printf("Subject 3: ");
    scanf("%d",&s3);
    printf("Subject 4: ");
    scanf("%d",&s4);
    printf("Subject 5: ");
    scanf("%d",&s5);
    TM=s1+s2+s3+s4+s5;
    printf("Total Marks= %d",TM);
    Percentage=(TM)*100/500;
    printf("\nPercentage= %.1f", Percentage); 
    return 0;

}