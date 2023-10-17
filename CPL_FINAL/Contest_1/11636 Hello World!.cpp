#include<iostream>
using namespace std;
int main()
{
    long long a,sum,c,i,j=0;
    while(1){
        cin>>a;
        if (a<=0){
            break;
        }
        i=1;
        sum =1;
        c=0;
        i=sum;
        while(sum<a){
            sum = sum*2;
            c++;
            i=sum;
        }
        /*if(sum>a){
            c++;
        }*/
        j++;
        cout<<"Case "<<j<<": "<<c<<"\n";
    }
    return 0;
}

