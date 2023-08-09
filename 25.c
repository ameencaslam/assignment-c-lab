// write odd and even numbers into 2 files

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *ptr1,*ptr2;
    ptr1=fopen("C:\\Users\\ameen\\Desktop\\C Lab\\odd.txt","w+");
    ptr2=fopen("C:\\Users\\ameen\\Desktop\\C Lab\\even.txt","w+");
    if(ptr1==NULL || ptr2==NULL)
    {
        printf("File Error");
        exit(1);
    }

    int n,i,num;
    
    printf("Enter number of entries: ");
    scanf("%d",&n);
    printf("\nEnter the numbers==>\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            fprintf(ptr2,"%d\n",num);
        }
        else
        {
            fprintf(ptr1,"%d\n",num);
        }
    }

    fclose(ptr1);
    fclose(ptr2);
}