#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d[5],i,j;
    cin>>a>>b>>c;
    d[0] = a;
    d[1] = b;
    d[2] = c;
    for (j=0;j<3;i++)
    {
        for (i=0;i<3;i++)
        {
            if (d[i]>d[i+1])
            {
                d[4]=d[i];
                d[i]=d[i+1];
                d[i+1]=d[4];
            }
        }
    }
    cout<<d[0]<<"\n"<<d[1]<<"\n"<<d[2]<<"\n"<<"\n";
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    return 0;
}
