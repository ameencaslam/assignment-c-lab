// length of a string using pointer

#include <stdio.h>

void main()
{
    char str[100],*ptr;
    int i,count=0;

    printf("Enter the string : ");
    gets(str);
    ptr=str;

    while(*ptr!='\0')
    {
        count++;
        ptr++;
    }

    printf("Length of the string is %d",count);
}