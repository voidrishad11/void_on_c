#include <stdio.h>

void main()
{

    char s2[]="RISHAD HOSSAIN";
    int i,l=0;
    for(i=0;s2[i]!='\0';i++)
    {
        l++;
    }
    printf("Length = %d\n",l);
}