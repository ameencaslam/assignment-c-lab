// factorial of a number using recursion

#include <stdio.h>
long int fact(int n) 
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}

int main() 
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, fact(n));
    return 0;
}
