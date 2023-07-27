#include<stdio.h>

void main()
{
    char c;
    printf("Enter a letter\n");
    scanf("%c",&c);
    if(c >= 'a' && c <= 'z')
    {
        printf("The letter is a small letter\n");
    }
    else if(c >= 'A' && c <= 'Z')
    {
        printf("The letter is a capital letter\n");
    }
    else 
    {
        printf("This is not a letter\n");
    }
}