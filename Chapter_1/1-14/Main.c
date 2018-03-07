/* 
 * Cels to Fahr Conveter 
 * Joshua Campbell
 * 03/07/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include "Globals.h"

float celstofahr(float);

int main()
{
    float cels, fahr;

    printf("Cels Fahr\n");
    for(
            cels = UPPER_LIMIT;
            cels >= LOWER_LIMIT;
            cels = cels - STEP_SIZE
            )
    {
        fahr = celstofahr(cels);
        printf("%3.0f %6.1f\n", cels, fahr); /* 000c 000000.0f */
    }

    exit(0);
}
/****************************************/

float celstofahr(float cels)
{
    return ((cels * 9) / 5) + 32;
}
