#include <iostream>
using namespace std;
int main()
{
    unsigned long l,r,n,i,sum,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        j=0;
        sum = 0;
        cin>>l>>r;
        sum = ((r-l+1)*(l+r))/2;
        cout<<sum<<"\n";
    }
    return 0;
}


