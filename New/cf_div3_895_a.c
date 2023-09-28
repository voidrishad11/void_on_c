#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,count;
    int a,b,c;
    float d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a>b)
        {
            d =(((a-b)/2)/c);
            count = ceil(d);
        }
        else
        {
            d =(((b-a)/2)/c);
            count = ceil(d);
        }
        printf("%1.f\n",count);
    }
    return 0;
}
