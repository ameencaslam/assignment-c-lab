#include <stdio.h>
#include <math.h>
#include <limits.h>

//////////////////////////////Function to find nth Armstrong num/////////////////////////////

int nth_arms(int n)
{
    int count=0;

    for(int i=1;i<=INT_MAX;i++)
    {
        int digit,num,sum=0,rem=0;
        
        num=i;
        digit=(int)log10(num)+1;

        while(num>0)
        {
            rem=num%10;
            sum+=pow(rem,digit);
            num/=10;
        }

        if (i==sum)
        {
            count++;
        }
        if(count==n)
        {
            return i;
        }
    }
}

/////////////////////////////////////////Main Function/////////////////////////////////////////

int main()
{
    int n;
    printf("This program finds the nth Armstrong Number\nEnter n : ");
    scanf("%d",&n);
    printf("%dth Armstrong number is %d",n,nth_arms(n));
    return 0;
}