#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define YES 1
#define NO 0
#define N 40

int main()
{
    char str[N], str2[N];
    int digits=0, alpha=0, others=0;
    unsigned int i, j;
    int allTheCharsCorrespond; /* flag */

    printf("Insert a string: ");
    if (gets(str)==NULL)
    {
        printf("Error while reading the string");
        return -1;
    }

    printf("String length is %d characters\n", strlen(str));

    for (i=0; i<strlen(str); i++)
        if (isdigit(str[i]))
            digits++;
        else if (isalpha(str[i]))
            alpha++;
        else /* not required by execise text, but easy to add */
            others++;

    printf("The string contains %d digits, %d alphabetic characters (and %d other characters)\n", digits, alpha, others);

    printf("Insert the second string: ");
    if (gets(str2)==NULL)
    {
        printf("Error while reading the second string");
        return -2;
    }

    allTheCharsCorrespond = NO;   /* flag */
    /* execute the for statement as long as the characters do not correspond */
    for(i=0; i <= strlen(str)-strlen(str2) && allTheCharsCorrespond==NO; i++)
    {
        allTheCharsCorrespond=YES; /* suppose all the chars correspond, unless... */
        for(j=0; j<strlen(str2) && allTheCharsCorrespond==1; j++)
            if(str[i+j]!=str2[j])
                allTheCharsCorrespond=NO;    /* ... unless a couple of them do not correspond */
    }

    if (allTheCharsCorrespond==YES)
        printf("The first string contains the second one");
    else
        printf("The first string does not contain the second one");

    return 0;
}
