// currency denomination

#include <stdio.h>

void main()
{
    int num,i,temp1,temp2;
    int bills[]={2000,500,200,100,50,20,10,5,2,1};

    printf("Enter the Number: ");
    scanf("%d",&num);

    temp1=num;

    for(i=0;i<10;i++)
    {
        temp2=temp1/bills[i];
        temp1=temp1%bills[i];
        printf("%d x %d\n",bills[i],temp2);
    }
}
