// array append

#include <stdio.h>

void main()
{
    int i,n1,n2;
    printf("Enter number of entries for Array 1: ");
    scanf("%d",&n1);
    printf("Enter number of entries for Array 2: ");
    scanf("%d",&n2);
    int ar1[n1],ar2[n2],ar3[n1+n2];
    printf("Enter elements of Array 1: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&ar1[i]);
        ar3[i]=ar1[i];
    }

    printf("Enter elements for Array 2: ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&ar2[i]);
        ar3[i+n1]=ar2[i];
    }

    printf("Appended Array: ");
    for(i=0;i<(n1+n2);i++)
    {
        printf("%d ",ar3[i]);
    }
}
