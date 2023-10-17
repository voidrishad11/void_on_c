#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N = 1000000000,i,n,find,flag = 0;
    vector<int> a(N);
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>find;
    for (i=0;i<n;i++)
    {
        if (a[i]==find)
            cout<<i<<"\n";
            flag++;
    }
    if (flag==0)
        cout<<"-1\n";
    return 0;
}
