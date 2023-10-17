#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long a,b,i,sum=0,sqi,c;
    double sq;
    while(1){
        cin>>a>>b;
        if (a==0&&b==0){
            break;
        }
        c=0;
        for(i=a;i<=b;i++){
            sq= sqrt(i);
            sqi=(int)sq;
            if(sq - sqi ==0){
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
