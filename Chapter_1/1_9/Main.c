
#include <stdio.h>

typedef enum { out = 0, in = 1 } statebool;

int main()
{
    int c;
    statebool state;

    state = out;
    while((c = getchar()) != EOF)
    {
       if(c == ' ')
       {
           state = in;
       }
       else if(c != ' ' && state == in)
       {
           putchar(' ');
           putchar(c);
           state = out;
       }
       else
       {
           putchar(c);
       }
    }   

    return 0;
}
