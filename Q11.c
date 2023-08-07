// ///// program to display a pyrmid using star (*)

#include <stdio.h>

int main()
{
    int n,i,a,s;

    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    printf(".\n");

    for(i=0;i<=n;i++)
    {
        for(s=i;s<n;s++)
        {
            printf(" ");
        }
        for(a=1;a<=i;a++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}