#include <stdio.h>
#include <stdlib.h>

#define MAXLINES 1000
#define MAXCHARS 1000
#define THRESHHOLD 80 
static int LINENUM = 0;

int getlinex(char lines[][MAXCHARS], int maxline);

int main()
{
    char lines[MAXLINES][MAXCHARS];   /* Entire input */
    int len;                            /* Length of line */

    while((len = getlinex(lines, MAXLINES)) > 0)
    {
        continue;
    }

    int i;
    for(i = 0; lines[i] != '\0' && i != LINENUM; ++i)
    {
        printf("%s", lines[i]);
    }

    exit(0);
}

/* Add a single line to linesout and return the line length */
int getlinex(char linesout[][MAXLINES], int lim)
{
    int i, c;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        linesout[LINENUM][i] = c;
    }

    if(c == '\n')
    {
        linesout[LINENUM][i] = '\n';
        ++i;
    }
    
    linesout[LINENUM][i] = '\0';

    ++LINENUM;
    return i - 1;
}