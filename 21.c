// short form of a string

#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char word[100];

    printf("Enter the sentence: ");
    gets(word);

    printf("%c",word[0]);
    for(i=0;(word[i]!='\0');i++)
    {
        if(word[i-1]==' ')
        {
            printf("%c",word[i]);
        }
    }
}