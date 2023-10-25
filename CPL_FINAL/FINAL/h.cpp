#include<iostream>
using namespace std;
int main()
{
    long long a,u,v,total=0,i;
    cin>>a;
    for(i=1;i<=a;i++){
        cin>>u>>v;
        total = (u/2)*v;
        cout<<"Case "<<i<<": "<<total<<"\n";
    }
    return 0;
}

