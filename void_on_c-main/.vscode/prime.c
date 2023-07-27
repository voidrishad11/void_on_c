#include<cstdio>


bool isPrime(int x)
{
    int status =0;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            status = 1;
            break;
        }
    }
    if (status ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n,ara[1000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        bool f= isPrime(ara[i]);
        if(f)
        {
            printf("%d ",ara[i]);
        }
    }
}