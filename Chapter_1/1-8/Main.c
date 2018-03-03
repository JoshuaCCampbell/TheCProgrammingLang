
#include <stdio.h>

int main()
{
    int c;

    int nspace, ntab, nline;

    nspace = ntab = nline = 0;
    while((c = getchar()) != EOF)
    {
        switch(c)
        {
            case ' ':
                ++nspace;
            case '\t':
                ++ntab;
            case '\n':
                ++nline;
            default :
                break;
        }
    }

    printf("Spaces: %d Tabs: %d Lines: %d\n", nspace, ntab, nline);
    
    return 0;
}
