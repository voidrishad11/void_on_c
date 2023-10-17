#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,c=0;
    cin>>n1>>n2;
    for (i=n1;i<=n2;i++)
    {
        if (i == 4 ||i == 7 ||i == 77 ||i == 744)
        {
            cout<<i<<" ";
            c++;
        }

    }
    if (c==0)
        cout<<"-1\n";
    else
        cout<<"\n";
    return 0;
}
