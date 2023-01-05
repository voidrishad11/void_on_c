#include<stdio.h>
#include<ctype.h>

int main()
{
    char c;
    printf("Enter a colours first letter\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'r':
        case 'R':
            printf("%c is Red",c);
            break;
        case 'g':
        case 'G':
            printf("%c is Green",c);
            break;
        case 'b':
        case 'B':
            printf("%c is Blue",c);
            break;
        default:
            printf("%c is different than RGB",c);
    }
    return 0;
}