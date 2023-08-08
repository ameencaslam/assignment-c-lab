// number of vowel in a string

#include <stdio.h>
#include <string.h>

void main()
{
    int i,count=0;
    char word[100];

    printf("Enter the sentence: ");
    gets(word);

    for(i=0;(word[i]!='\0');i++)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o'|| word[i]=='u')
        {
            count++;
        }
    }
    printf("There is %d vowels",count);
}