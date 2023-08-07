// matrix multiplication

#include <stdio.h>

void main()
{
    int row,col,i,j,k,a,b,c,temp1,sum=0;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d",&row);

    col=row;

    int mat1[row][col],mat2[row][col];

    printf("\n\nEnter the contents of the First Matrix:-\n");
    for(i=0;i<row;i++)
    {
        printf("Enter contents of row %d : ",i+1);
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\n\nEnter the contents of the Second Matrix:-\n");
    for(i=0;i<row;i++)
    {
        printf("Enter contents of row %d : ",i+1);
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n\n\n");

    printf("Matrix1 x Matrix2 ==>\n\n");

    for(i=0,c=0;i<row;i++,c++)
    {
        for(k=0;k<col;k++)
        {
            for(j=0,sum=0;j<col;j++)
            {
                a=mat1[i][j];
                b=mat2[j][i+k-c];
                temp1=a*b;
                sum+=temp1;
                // printf("I=%d J=%d K=%d A=%d B=%d T1=%d S=%d\n",i,j,k,a,b,temp1,sum);
            }
            printf("\t%d",sum);    
        } 
        printf("\n");    
    }    
}
