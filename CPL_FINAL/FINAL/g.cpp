#include<iostream>
#include<string>
using namespace std;
int factorial(int n,int l){
    int i, ans =1;
    for(i=n;i>0;i=(i-l)){
        ans = ans*i;
    }
    return ans;
}
int main()
{
    long long n,k,len,total;
    string s;
    cin>>n;
    cin>>s;
    len = s.length();
    total = factorial(n,len);
    cout<<total<<"\n";
    return 0;
}


