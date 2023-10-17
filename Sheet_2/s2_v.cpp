#include<iostream>
using namespace std;
int main()
{
    long long n,i,j=1,c,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(c=1;c<=3;c++)
        {
            if (j!=1)
            {
                t = j+1;
            }
            else
                t = j;
            for(j=t,c=1;c<=3;j++)
            {
                cout <<j<<" ";
                c++;
            }
            cout <<"PUM\n";
        }

        /*for(j=j+1;j<n+i;j++)
        {
            cout <<"*";
        }
        cout <<"\n";*/
    }
    return 0;
}






