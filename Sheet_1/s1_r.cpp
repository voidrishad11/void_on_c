#include<iostream>
using namespace std;
int main()
{
    long long a,sub,year =0,mnth,day;
    cin>>a;
    if (a>=365)
    {
        sub = a-365;
        year++;
    }
    else
    {
        sub = a;
    }
    while(sub>=365)
    {
        sub = sub-365;
        year++;
    }
    cout<<year<<" years\n";
    if (a<365)
    {
        sub = a;
    }
    mnth = sub/30;
    day = sub%30;
    cout<<mnth<<" months\n";
    cout<<day<<" days\n";
    return 0;
}
