// mark list using struct

#include <stdio.h>
#include <string.h>

struct mlist
{
    char name[30];
    int cs;
    int maths;
    int eng;
    int total;
    float perc;
};

void main()
{
    int n, i;

    printf("How many Students? : ");
    scanf("%d", &n);

    struct mlist std[n];
    struct mlist *ptr = std;

    printf("Marks out of 100");

    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter details of Student %d ==>\n", i + 1);
        printf("Enter Name : ");
        scanf("%s", ptr->name);
        printf("Enter Computer Science Marks : ");
        scanf("%d", &ptr->cs);
        printf("Enter Mathematics Marks : ");
        scanf("%d", &ptr->maths);
        printf("Enter English Marks : ");
        scanf("%d", &ptr->eng);
        ptr++;
    }

    ptr = std;
    for (i = 0; i < n; i++)
    {
        printf("\n---------------------------------\n");
        printf("Name : %s\n", ptr->name);
        printf("Computer Science : %d\n", ptr->cs);
        printf("Mathematics : %d\n", ptr->maths);
        printf("English : %d\n", ptr->eng);
        ptr->total = ptr->cs + ptr->maths + ptr->eng;
        ptr->perc = (float)ptr->total / 300 * 100;
        printf("Total %d with %.2f%%\n", ptr->total, ptr->perc);
        ptr++;
    }
}