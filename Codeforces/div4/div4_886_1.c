#include<stdio.h>
int main()
{
    int a,b,c,f,s,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a>=b && a>=c)
        {
            f = a;
            if (b>=c)
                s = b;
            else
                s = c;
        }
        else if (b>=a && b>=c)
        {
            f = b;
            if (a>=c)
                s = a;
            else
                s = c;
        }
        else
        {
            f = c;
            if (b>=a)
                s = b;
            else
                s = a;
        }
        if (f+s>=10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
