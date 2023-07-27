#include <stdio.h>

void main()
{
    int ara2[10][10], i, n, j, x, ara3[10][10];
    printf("Enter the size\t\t:");
    scanf("%d", &n);

    // group input

    int ara1[10][10] = {{3, 2, 1}, {1, 2, 3}, {1, 1, 1}};
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter (%d,%d) number value\t:", i, j);
            scanf("%d", &ara2[i][j]);
        }
    }
    printf("\nThe First array output (group input)\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", ara1[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Second array output (user input)\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", ara2[i][j]);
        }
        printf("\n");
    }
    // Multiplication
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            ara3[i][j] = (ara1[i][j]+ara2[i][j]);
        }
    }
    printf("\nThe Summation of the arrays are\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", ara3[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}