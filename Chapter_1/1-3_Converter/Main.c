
#include <stdio.h>

#define LOWERLIMIT  0       /* Temperature lower limit */
#define UPPERLIMIT  300     /* Temperature upper limit */
#define STEPSIZE    20      /* List graduation */

int main()
{
    float fahr, cels;

    fahr = LOWERLIMIT;
    printf("Fahr Cels\n");
    while(fahr < UPPERLIMIT) 
    {
        cels = (fahr - 32.0) * 5.0 / 9.0;
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + STEPSIZE;
    }

    return 0;
}
