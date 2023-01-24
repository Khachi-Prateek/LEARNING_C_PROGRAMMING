#include<stdio.h>
#include<math.h>
int main()
{
    int dis, meter, feet, inches, cm ;
    printf("Enter Distance= ");
    scanf("%d",&dis);
    meter = dis*1000; 
    printf("Distance in meters= %d m", meter);
    feet = meter*3.2;
    printf("\nDistance in feet= %d feet", feet);
    inches = feet * 12;
    printf("\nDistance in inches= %d inc", inches);
    cm=  inches*2.54;
    printf("\nDistance in centimeter= %d cm", cm);
    return 0;
}