#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    char x;
    cin >>a>>x>>b;
    if (x =='>')
    {
        if (a>b)
            cout <<"Right\n";
        else
            cout <<"Wrong\n";
    }
    if (x =='<')
    {
        if (a<b)
            cout <<"Right\n";
        else
            cout <<"Wrong\n";
    }
    if (x =='=')
    {
        if (a==b)
            cout <<"Right\n";
        else
            cout <<"Wrong\n";
    }

}
