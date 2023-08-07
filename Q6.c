#include <stdio.h>

int main(){
    int n,i,t1=0,t2=1,t3=(t1+t2);

    printf("Enter the Number : ");
    scanf("%d",&n);
    
    printf(".\n\n");
    
    printf("0,1,");

    for(i=3;i<=n;i++)
    {
        printf("%d,",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    
    printf("....\n\n");

    printf("%dth Fib.No is %d",n,t2);

    return 0;
}