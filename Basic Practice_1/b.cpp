#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,c;
    int input;
    while (true)
    {
        cin>>input;
        if (input == 0)
            break;
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            c=0;
            double root = sqrt(i);
            if (root==0)
                c++;
        }
        cout<<c<<"\n";
    }
}
