#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include<string.h>
int main()
{
    int n1,n2,avg1,i,j;
    long long int a1[100000],avg2,sum;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&n2);
        for(i=0,sum=0;i<n2;i++)
        {
            scanf("%lld",&a1[i]);
            sum = sum + a1[i];
        }
        avg1 = sum/n2;
        if (sum%n2==0)
        {
            std::sort(std::begin(a1), std::end(a1));
            avg2=(a1[0]+a1[n2-1])/2;
            if (avg1==avg2)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
        else
        {
            printf("No\n");
        }
    }
	return 0;
}
