#include<stdio.h>
#include<math.h>

int main()
{
    float l,b,r;
    printf("Enter Length: ");
    scanf("%f",&l);
    
    printf("Enter Breadth: ");
    scanf("%f",&b);

    printf("Enter Radius: ");
    scanf("%f",&r);
    
    printf("Area of rectange = %.1f", l*b);
    
    printf("\nPerimeter of rectange = %.1f", 2*(l+b));
    
    printf("\nArea of circle = %.1f", 3.14*r*r); 
    
    printf("\nCircumference of circle = %.1f", 2*3.14*r);
}