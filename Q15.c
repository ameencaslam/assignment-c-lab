//location of a given number in an array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int n=0,i=0,entry=0,x=0;

    printf("This program finds the location of a given Number in an Array.\n\n");
    printf("Enter the number of Elements in the Array : ");
    scanf("%d",&n);

    int array[n];
    
    printf("Enter the Numbers for the array :-\n");
    
    for(i=0 ; i<n ; i++)
    {
        printf("\nEnter Number %d : ",i+1);
        scanf("%d",&array[i]);
    }

    system("cls");

    printf("\n\nThe entries are :-\n\n");
    for(i=0;i<n;i++)
    {
        printf("Entry %d : %d\n",i+1,array[i]);
    }

    printf("\n Enter the number of entry you want to know the location of : ");
    scanf("%d",&entry);

    x=entry-1;

    printf("The location of Entry %d: %d is %p",entry,array[x],&array[x]);

    return 0;
}