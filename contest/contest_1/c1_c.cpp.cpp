#include<iostream>
#include<bits/c++io.h>
using namespace std;

int main()
{
    char a,c;
    cin>>a;
    int n = (int)a;
    if (n<122)
    {
        c = (char)(n+1);
        cout<<c<<"\n";
    }
    else
        cout<<"a\n";
    return 0;
}
