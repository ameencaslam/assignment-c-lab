// c program to display the pattern with a number

#include <stdio.h>
#include <math.h>

void main()
{
    int num,i,n,temp0,temp1,temp2,temp3;
    printf("Enter the number: ");
    scanf("%d",&num);
    n=(int)log10(num)+1;
    temp0=num;
    temp2=n;
    printf(".\n\n");
    for(i=0;i<n;i++,temp2-=1)
    {
        temp3=pow(10,temp2);
        temp1=temp0%temp3;
        printf("%d\n",temp1);
    }
}
