#include<stdio.h>
#include<math.h>

int main()
{
    int n1,n2,sum,avg,i,j;
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&n2);
        int = a1[n2],a2[n2];
        for(i=0,sum=0;i<n2;i++)
        {
            scanf("%d",&a[i]);
            sum = sum + a[i];
        }
        avg = sum/n2;
        if (sum%n2==0)
        {
            for(i=0;i<n2;i++)
            {
                a2[i] = avg - a1[i];
            }
            i=0;
            j=i+1;
            while(i<n2 && j<n2)
            {
                if ((a2[i] - a2[j])==0)
                {
                    a2[i] = 0;
                    a2[j] = 0;
                }
                else if (a2[i]==0)
                {
                    i++;
                    j=i+1;
                }
                else if (a2[j]==0)
                {
                    j++;
                }
            }
            while(i<n2)
            {
                if(a2[i]!=0)
                    `printf("No\n")
                else
                    i++;

            }
        }
        else
        {
            printf("No\n")
        }
    return 0;
}
