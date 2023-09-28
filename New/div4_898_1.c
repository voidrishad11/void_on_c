
#include<stdio.h>
#include<string.h>
int main()
{
    char s[5];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s);
        if (strcmp(s,"abc")==0 || strcmp(s,"acb")==0 || strcmp(s,"bac")==0 || strcmp(s,"cba")==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
