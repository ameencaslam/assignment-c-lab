// generate the leap years in a range

#include <stdio.h>

int main()
{
    int sy,ey,i,z=0;
    
    printf("This program finds the leap years in a given range\n\nEnter the Starting Year : ");
    scanf("%d",&sy);
    printf("Enter the Ending Year : ");
    scanf("%d",&ey);
    
    printf(".\t.\t.\t.\t.\t.\t.\n");
    printf("Leap Years between %d and %d are :-\n",sy,ey);
    
    for(i=sy;i<=ey;i++)
    {
        if(i%100==0)
        {
            if(i%400==0)
            {
                printf("%d\n",i);
            }
        }
        else if(i%4==0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}