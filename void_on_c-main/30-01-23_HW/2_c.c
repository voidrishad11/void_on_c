/*Printing Multiplication table from 1-10 vertically*/

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}
