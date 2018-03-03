#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGESTWORD 45 // Longest English word in major dicts

#define MEMERR 1 // Error code for memory


int main()
{
    int c;
    int *wordlengths;

    // Allocate memory for wordlengths array
    // Exit if memory can't be allocated
    wordlengths = calloc(LARGESTWORD, sizeof(int));
    if(!wordlengths)
    {
        fprintf(stderr, "Error allocating memory");
        return MEMERR;
    }

    // Count the number of letters in a word
    // Add to the running total
    int numofletters = 0;
    while((c = getchar()) != EOF)
    {
        if(c != ' ')
        {
            ++numofletters;
        }
        
        if (c == ' ')
        {
            ++wordlengths[numofletters];
            numofletters = 0;
        }
    }

    ++wordlengths[numofletters];
    
    printf("\n");

    int i;
    for(i = 0; i < sizeof(wordlengths); ++i)
    {
        printf("%d letters words\t", i);
        int j;
        for(j = 0; j < wordlengths[i]; ++j)
        {
            printf("x");
        }
        printf("\n");
    }
    
    free(wordlengths);
    return 0;
}
