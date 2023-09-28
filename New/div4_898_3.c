#include <stdio.h>
#include<string.h>

int main()
{
    int i,j,n,point = 0;
    char array[10][10];
    char c = 'X';
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                scanf("%s", &array[i][j]);
            }
        }
    }
    for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
              if (array[i][j]==c)
                {
                    switch (i)
                    {
                        case 0:
                        case 9:
                            point += 1;
                        case 1:
                        case 8:
                            switch (j)
                            {
                                case 0:
                                case 9:
                                    point += 1;
                                default:
                                    point += 2;
                                    break;
                            }
                        case 2:
                        case 7:
                            switch (j)
                            {
                                case 0:
                                case 9:
                                    point += 1;
                                case 1:
                                case 8:
                                    point += 2;
                                default:
                                    point += 3;
                                    break;
                            }
                        case 3:
                        case 6:
                            switch (j)
                            {
                                case 0:
                                case 9:
                                    point += 1;
                                case 1:
                                case 8:
                                    point += 2;
                                case 2:
                                case 7:
                                    point += 3;
                                default:
                                    point += 4;
                                    break;
                            }
                        default:
                            switch (j)
                            {
                                case 0:
                                case 9:
                                    point += 1;
                                case 1:
                                case 8:
                                    point += 2;
                                case 2:
                                case 7:
                                    point += 3;
                                case 3:
                                case 6:
                                    point += 4;
                                default:
                                    point += 5;
                                    break;
                            }
                            break;
                    }
                }
            }
        }
    return 0;
}
