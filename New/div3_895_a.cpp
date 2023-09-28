#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long a,b,c,n,x=0;
    int i;
    cin >>n;
    for (i =0;i<n;i++)
    {
        cin >> a>>b>>c;
        if (a==b)
            cout<<"0\n";
        else if (a>b)
        {
            x = ceil((((a+b)/2.0)-b)/c);
            cout<<x<<"\n";
        }
        else
        {
            x = ceil((((a+b)/2.0)-a)/c);
            cout<<x<<"\n";
        }
    }
    return 0;
}
