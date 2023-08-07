// matrix transporse

#include <stdio.h>

void main()
{
    int row,col,i,j,temp2;
    printf("Enter the number of rows and columns of the matrix\n\nEnter the number of Rows: ");
    scanf("%d",&row);
    printf("Enter the number of Columns: ");
    scanf("%d",&col);

    int mat1[row][col];

    printf("\n\nEnter the contents of the Matrix:-\n");
    for(i=0;i<row;i++)
    {
        printf("Enter contents of row %d : ",i+1);
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nTranspose ==>\n\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            temp2=mat1[j][i];
            printf("\t%d",temp2);
        }
        printf("\n\n");
    }
    printf("\n\n");
}