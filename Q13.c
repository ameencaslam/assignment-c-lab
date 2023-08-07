// C program for a simple calculator

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int selection,choice;
double a,b,x,result;

    mainx:
    system("clear");
    printf("\n\nThis is a Simple Calculator Program\n\n");
    printf("Enter 1 for ADDITION\nEnter 2 for SUBSTRACTION\nEnter 3 for MULTIPLICATION\nEnter 4 for DIVITION\nEnter 5 for POWER\nEnter 6 for SQUARE_ROOT\nEnter 7 for SIN\nEnter 8 for COS\nEnter 9 for TAN\n\n");

    start:
    printf("Enter your choice : ");
    scanf("%d",&selection);

    switch(selection)
    {
        case 1:
        printf("You have selected Addition ==> (A + B) <==\n");
        printf("Enter A : ");
        scanf("%lf",&a);
        printf("Enter B : ");
        scanf("%lf",&b);
        result=a+b;
        printf("%.2lf + %.2lf = %.3f\n",a,b,result);
        break;
        goto end;

        case 2:
        printf("You have selected Substraction ==> (A - B) <==\n");
        printf("Enter A : ");
        scanf("%lf",&a);
        printf("Enter B : ");
        scanf("%lf",&b);
        result=a-b;
        printf("%.2lf - %.2lf = %.3f\n",a,b,result);
        break;
        goto end;

        case 3:
        printf("You have selected Multiplication ==> (A x B) <==\n");
        printf("Enter A : ");
        scanf("%lf",&a);
        printf("Enter B : ");
        scanf("%lf",&b);
        result=a*b;
        printf("%.2lf x %.2lf = %.3f\n",a,b,result);
        break;
        goto end;

        case 4:
        printf("You have selected Divition ==> (A / B) <==\n");
        printf("Enter A : ");
        scanf("%lf",&a);
        printf("Enter B : ");
        scanf("%lf",&b);
        result=a/b;
        printf("%.2lf / %.2lf = %.3f\n",a,b,result);
        break;
        goto end;

        case 5:
        printf("You have selected Power ==> (A^B) <==\n");
        printf("Enter A : ");
        scanf("%lf",&a);
        printf("Enter B : ");
        scanf("%lf",&b);
        result=pow(a,b);
        printf("%.2lf^%.2lf = %.3f\n",a,b,result);
        break;
        goto end;

        case 6:
        printf("You have selected Square Root ==> (√X) <==\n");
        printf("Enter X : ");
        scanf("%lf",&x);
        result=sqrt(x);
        printf("√%.2lf = %.3lf\n",x,result);
        break;
        goto end;

        case 7:
        printf("You have selected sin operation ==> sin(x) <==\n");
        printf("Enter X in degree: ");
        scanf("%lf",&x);
        double angle1=(x*M_PI)/180;
        result=sin(angle1);
        printf("sin(%.2lf) = %.4lf\n",x,result);
        break;
        goto end;

        case 8:
        printf("You have selected sin operation ==> cos(x) <==\n");
        printf("Enter X in degree: ");
        scanf("%lf",&x);
        double angle2=(x*M_PI)/180;
        result=cos(angle2);
        printf("cos(%.2lf) = %.4lf\n",x,result);
        break;
        goto end;

        case 9:
        printf("You have selected sin operation ==> tan(x) <==\n==> Please note that some tan values might be UNDEFINED <==\n");
        printf("Enter X in degree: ");
        scanf("%lf",&x);
        double angle3=(x*M_PI)/180;
        result=tan(angle3);
        printf("tan(%.2lf) = %.4lf\n",x,result);
        break;
        goto end;

        default:
        printf("\nInvalid choice! Please select a valid option.\n\n");
        goto start;
    }

    end:
    printf("====================\n\nThanks for using the calculator\nEnter '0' to close the program\nEnter 1 to calculate again\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 0:
    printf("GoodBye");
    break;
    
    case 1:
    goto mainx;
    break;

    default:
    goto end;
    break;
    }

    return 0;

}