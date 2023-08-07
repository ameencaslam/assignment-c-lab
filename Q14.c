// convert a decimal to a base between 2-16
#include <stdio.h>
#include <math.h>

char hex(int alpha)
{
    switch(alpha)
    {
        case 0:
        return '0';
        break;

        case 1:
        return '1';
        break;

        case 2:
        return '2';
        break;

        case 3:
        return '3';
        break;

        case 4:
        return '4';
        break;

        case 5:
        return '5';
        break;

        case 6:
        return '6';
        break;

        case 7:
        return '7';
        break;

        case 8:
        return '8';
        break;

        case 9:
        return '9';
        break;

        case 10:
        return 'A';
        break;

        case 11:
        return 'B';
        break;

        case 12:
        return 'C';
        break;

        case 13:
        return 'D';
        break;

        case 14:
        return 'E';
        break;

        case 15:
        return 'F';
        break;

        default:
        break;
    }
}

int main()
{
    int num,base,temp0,rem=0,rem1=0,i;//variable declaration
    int alpha;
    char array[10];
    long int temp1=1,result,rev=0;

    printf("\n\nThis program will convert Decimal values into other base values (Upto 16)\n ==>(BASE_10)-->(BASE_X)\n\n");
    printf("Enter the Deciaml value : ");//basic introduction and input of data
    scanf("%d",&num);
    printf("Enter the Base value you want to Convert into : ");
    scanf("%d",&base);

    if(base>1 && base<10)
    {
        temp0=num;

        while(temp0!=0)
        {
            rem=temp0%base;
            temp1=(temp1*10)+rem;
            temp0/=base;
        }
     
        while(temp1!=0)
        {
            rem1=temp1%10;
            rev=(rev*10)+rem1;
            temp1/=10;
        }
        
        result=rev/10;
        
        printf("\n( %d ) BASE_10 = ( %ld ) BASE_%d\n\n\n",num,result,base);
    }

    else if(base==10)
    {
        printf("Base 10 is Decimal '_'");
    }

    else if(base>10 && base<17)
    {
        char remc;
        int n=0;
        temp0=num;
        i=0;
        while(temp0!=0)
        {
            alpha=temp0%base;
            remc=hex(alpha);
            array[i]=remc;
            temp0/=base;
            i++;
            n++;
        }
        
        printf("\n( %d ) BASE_10 = ( ",num);
        for(i=n;i>0;i--)
        {
            printf("%c",array[i-1]);
        }
        printf(" ) BASE_%d\n\n\n",base);
    }
    else
    {
        printf("\nError, only support base between 2 and 16\n");
    }

    return 0;
}
