#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 61  /* 60 chars for the input string + 1 for the final '\0' */
#define M 5

int main()
{
    char input_string[N];
    char words[M][N];  /* M words, each is N chars long */
    int num_words;
    int i;
    int sum;
    float average;
    int counters[N-1]= {0}; /* set all counters to 0, worst case is just one string 60 char long */

    if (gets(input_string)==NULL)
    {
        printf("Error reading the sentence.");
        return -1;
    }

    num_words = sscanf(input_string, "%s%s%s%s%s", words[0], words[1], words[2], words[3], words[4]);
    if (num_words==EOF)
        printf("No strings in this sentence.");
    else
    {
        printf("\nThe string includes %d words\n", num_words); /* if there are more, they are ignored */

        sum = 0;
        for (i=0 ; i <num_words ; i++)
        {
            sum += strlen(words[i]);   /* accumulate lengths */
            counters[strlen(words[i])]++; /* increment counter with index: strlen(vett_str[i]) */
        }
        average = (float)sum / num_words;

        printf("Word average length is %g\n", average); /* %g to remove trailing zeroes */

        printf("The string contains:\n");
        for (i=0; i<N-1; i++)
            if (counters[i]!=0)
                printf("\t%d word(s) with %d character(s)\n", counters[i], i);
    }

    return 0;
}
