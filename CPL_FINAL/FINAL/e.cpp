#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[101];
    int n,i,sum;
    while(1)
    {
        cin>>n;
        if (cin.eof())
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=0;
            for(i=0;i<(n/2)+1;i++)
            {
                sum+=((a[i]/2)+1);
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
