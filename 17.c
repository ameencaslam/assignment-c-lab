#include <stdio.h>

void main()
{
    int r,c,i,j;

    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);

    int arr[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j)
            {
                arr[i][j]=1;
            }
            if(i==j)
            {
                arr[i][j]=0;
            }
            if(i>j)
            {
                arr[i][j]=-1;
            }
        }
    }
    printf(".\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
