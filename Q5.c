#include <stdio.h>
#include <math.h>

int main(){
    
double a,b,c,temp1,temp2,temp3,r1,r2;

printf("Enter a : ");
scanf("%lf",&a);
printf("Enter b : ");
scanf("%lf",&b);
printf("Enter c : ");
scanf("%lf",&c);

temp1=((b*b)-(4*a*c));
temp2=sqrt(-temp1);
temp3=sqrt(temp1);

if(temp1<0){
    printf("Roots are imaginery\n");
    r1=(-b/(2*a));
    r2=(temp2)/(2*a);
    printf(".\nRoot 1 = %.2lfi\nRoot 2 = %.2lfi",r1+r2,r1-r2);
}
else{
    r1=(-b+temp3)/(2*a);
    r2=(-b-temp3)/(2*a);
    printf(".\nRoot 1 = %.2lf\nRoot 2 = %.2lf",r1,r2);
    
};

return 0;
}