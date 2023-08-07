#include <stdio.h>

int main(){
    int sum=1,i,n;

    printf("Enter a positive integer Number : ");
    scanf("%d",&n);

    for (i=1;i<=n;i+=1)
    {
        sum=sum*i;
    }

    printf("%d Factorial is %d",n,sum);

    return 0;
    
}