#include<stdio.h>

void main()
{
    char s[100],j;
    int i,k=0;
    printf("Please enter the string\n");
    gets(s);
    int n=strlen(s);
    printf("\n\nSearching What?\t");
    scanf("%c",&j);
    for(i=0;i<n;i++)
    {
        if(s[i]==j)
        {
            k++;
            break;
        }
    }
    if(k!=0)
    {
        printf("\nMatch found\n");
    }
    else
    {
        printf("\nMatch Not found\n");
    }
}