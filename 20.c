// prime numbers in a group of numbers using function

#include <stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i != 0)
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void main()
{
    int i,n,res,count=0;

    printf("Enter number of entries: ");
    scanf("%d",&n);

    int ar[n];
    int pr[n];

    for(i=0;i<n;i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&ar[i]);
        res=prime(ar[i]);
        if(res==0)
        {
            pr[count]=ar[i];
            count++;
        }
    }

    printf("There is %d Prime Numbers:-\n",count++);
    for(i=0;i<count-1;i++)
    {
        printf("%d\n",pr[i]);
    }
}