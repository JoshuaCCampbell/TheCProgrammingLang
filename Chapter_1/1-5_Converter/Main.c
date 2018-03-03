
#include <stdio.h>

#define LOWERLIMIT  0 
#define UPPERLIMIT  300
#define STEPSIZE    20

int main()
{
    float cels, fahr;

    printf("Cels Fahr\n");
    for(cels = UPPERLIMIT; cels >= LOWERLIMIT; cels = cels - STEPSIZE)    
    {
        fahr = ((cels * 9) / 5) + 32;
        printf("%3.0f %6.1f\n", cels, fahr);
    }

    return 0;
}
