#include <stdio.h>

int main(){
    int n,i,p=0,ne=0,z=0;
    printf("Enter the number of entries : ");
    scanf("%d",&n);
    
    int numbers[n];
    for(i=0;i<n;i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&numbers[i]);
    }
    
     for (i = 0; i < n; i++) {
        if (numbers[i] > 0) {
            p++;
        } else if (numbers[i] < 0) {
            ne++;
        } else {
            z++;
        }
    }
    
    printf(".\n");
    
    printf("Positives = %d\n",p);
    printf("Negatives = %d\n",ne);
    printf("Zeroes = %d\n",z);
    
    return 0;
}