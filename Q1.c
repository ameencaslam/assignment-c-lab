#include<stdio.h>

int main()
{
int num,sum=0,n,rem=0,rev=0;

printf("Enter a Number: ");
scanf("%d",&num);
n=num;


while(num!=0)
{
sum+=(num%10);
num/=10;}

while(n!=0)
{
rem=n%10;
rev=(rev*10)+rem;
n/=10;}


printf("Sum = %d\n",sum);
printf("Reverse = %d\n",rev);

return 0;
}
