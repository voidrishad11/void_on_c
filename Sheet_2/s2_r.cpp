#include<iostream>
using namespace std;
int main()
{
    long long a,b,i,sum=0;
    while(1)
    {
        cin>>a>>b;
        if (a<=0 ||b<=0)
            break;
        sum=0;
        if (a>b){
            for(i=b;i<=a;i++){
                cout<<i<<" ";
                sum = sum + i;
            }
        }
        else{
            for(i=a;i<=b;i++){
                cout<<i<<" ";
                sum = sum + i;
            }
        }
        cout<<"sum ="<<sum<<"\n";
    }
    return 0;
}
