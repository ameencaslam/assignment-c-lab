// program to evaluate 1+x+(x^2/2!)+(x^3/3!)+.....+(x^n/n!)

#include <stdio.h>
#include <math.h>

int main(){
    double e=M_E,x;

    printf("This Program will output 1+x+(x^2/2!)+(x^3/3!)+.....+(x^n/n!) for a given X\n");
    printf("Enter the value of X : ");
    scanf("Answer = %lf",&x);
    printf("%lf",pow(e,x));

    return 0;
}
