#include<stdio.h>

int main()
{
    int n,i,a,b,resp,j,a_wordl[50],a_qual[50],max,m,ans;

    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&m);
        max = 0;
        for(resp=1;resp<=m;resp++)
        {
            scanf("%d %d",&a_wordl[resp],&a_qual[resp]);
            if (a_wordl[resp]<=10 && max < a_qual[resp])
            {
                max = a_qual[resp];
                ans = resp;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
