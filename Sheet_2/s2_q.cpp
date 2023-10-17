#include<iostream>
using namespace std;
int main()
{
    int n,i,a,mod,div;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        div=1;
        while(div!=0)
        {
            mod = a%10;
            div = a/10;
            a = div;
            cout<<mod<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
