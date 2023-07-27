#include <stdio.h>
#include <string.h>
void main()
{
    char s1[]="RISHAD HOSSAIN";
    char s2[]="RISHAD HOSSAIN";
    
    int c= strcmp(s1,s2);
    if(c==0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
    
}