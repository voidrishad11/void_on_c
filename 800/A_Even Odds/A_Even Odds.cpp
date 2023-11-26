#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long n,i,c=0;
    vector<long long>
    cin>>n>>k;
    for(i=1;i<=n;i++){
        if(i%2!=0)
            s_odd+=static_cast<char>(i);
        else
            s_even+=static_cast<char>(i);
    }
    s_merge = s_odd + s_even;
    cout<<s_merge[k-1]<<"\n";
    return 0;
}



