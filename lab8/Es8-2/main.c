#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define N 30

int main()
{
    char str[N];
    unsigned int i, words=0;

    printf("Insert a string: ");
    if (gets(str)==NULL)
    {
        printf("Error while reading the string");
        return -1;
    }

    for (i=0; i<strlen(str); i++)
        if (isdigit(str[i]))
            str[i] = '*';
        else if (!isalpha(str[i]))  /* same as isalpha(str[i]) == 0 */
            str[i]='_';
        else
            str[i]=toupper(str[i]); /* toupper returns the same char if it not a lowercase letter */

    puts(str);

    for (i=0; i<strlen(str); i++)
        if (str[i]=='_' && (str[i+1]!='_' || str[i+1]=='\0')) /* if (isalnum(str[i] && !isanlnum[i=1]) */
            words++;

    printf("If we consider the \'_\' character as word separator there are is a total of %d words\n", words);

    return 0;
}
