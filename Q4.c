#include <stdio.h>

int main(){
    int n,i,sum;

    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum=i*n;
        printf("%d x %d = %d\n",i,n,sum);
    }

    return 0;
}