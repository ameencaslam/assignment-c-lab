// distance between coordinates

#include <stdio.h>
#include <math.h>


int main(){

int x1,x2,y1,y2;
float dist;
printf("Enter first coordinates : ");
scanf("%d %d",&x1,&y1);
printf("Enter second coordinates : ");
scanf("%d %d",&x2,&y2);

dist=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf("Distance is : %.2f",dist);

return 0;
}
