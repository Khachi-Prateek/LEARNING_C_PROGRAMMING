#include<stdio.h>
int main()
{
    int s,e;
    printf("Enter Starting and Ending Numbers: ");
    scanf("%d  %d", &s,&e);
    if(s%2==0)
    {
        s+=1;
        while(s<=e)
        {
            printf("%d\n",s);
            s+=2;
        }
    }   
    else
    {
        while(s<=e)
        {
            printf("%d\n",s);
            s+=2;
        }

    }    
}