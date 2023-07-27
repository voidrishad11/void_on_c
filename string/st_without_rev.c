#include <stdio.h>

void main()
{

    char s2[]="RISHAD HOSSAIN";
    int i,l=0,j=0,temp;
    for(i=0;s2[i]!='\0';i++)
    {
        l++;
    }
    for(i=0,j=l-1;j>=l/2;i++,j--)
    {
        temp=s2[i];
        s2[i]=s2[j];
        s2[j]=temp;
    }
    printf("Reversed string = %s\n",s2);
    
}