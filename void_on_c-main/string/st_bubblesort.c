#include<stdio.h>
#include<string.h>

void main()
{
    char s[100];
    int i,j,x;
    printf("Enter the string\n");
    gets(s);
    int l=strlen(s);
    for (i=0;i<l-1;i++)
    {
        for (j=i+1;j<l;j++)
        {
            if(s[i]>s[j])
            {
                x=s[i];
                s[i]=s[j];
                s[j]=x;
            }
        }
    }
    printf("\n");
    printf("The sorted string is %s",s);
}