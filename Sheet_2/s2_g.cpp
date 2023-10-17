#include <iostream>
using namespace std;
unsigned long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n*factorial(n - 1);
}
int main()
{
    int n,i,a;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        cout <<factorial(a)<<"\n";
    }
    return 0;
}
