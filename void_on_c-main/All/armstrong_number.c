#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int digitcounter(int n)
{
    int cnt=0;
    while(n!=0)
    {
        cnt++;
        n=n/10;
    }
    return cnt;
}
bool ca(int n)
{
    int n1,sum=0,d,r;
    n1=n;
    d = digitcounter(n);
    while(n1!=0)
    {
       r =n1%10;
       sum = sum + pow(r,d);
       n1=n1/10;
    }
    if (n==sum)
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
    int n;
    scanf("%d",&n);
    for (int i=10;i<=n;i++)
    {
        bool r = ca(i);
        if(r)
        {
            printf("%d ",i);
        }
    }
}