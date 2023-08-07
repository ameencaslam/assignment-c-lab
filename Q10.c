// find the standard deviation of n numbers

#include <stdio.h>
#include <math.h>

int main()
{
    float sum=0,mean=0,temp1=0,temp2=0,sd=0;
    int i,n;
    printf("This program Calculates the Mean, Standard Deviation and Variance of a given set of numbers\n\n");
    printf("Enter the number of entries : ");
    scanf("%d",&n);
    
    int numbers[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&numbers[i]);
        sum=sum+numbers[i];
    }

    mean=sum/n;
    
    for(i=0;i<n;i++)
    {
        temp1+=pow((numbers[i]-mean),2);
    }

    temp2=temp1/n;

    sd=sqrt(temp2);
    
    printf(".\nStandard Deviation is: %.2f\n",sd);
    printf(".\nVariance is: %.2f\n",temp2);
    printf(".\nMean is: %.2f\n",mean);
  
    
    return 0;
}