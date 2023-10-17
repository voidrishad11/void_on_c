#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b>>c;
        if (a<b && b<c){
            cout<<"Case "<<i<<": "<<b<<"\n";
        }
        else if (b<a && a<c){
            cout<<"Case "<<i<<": "<<a<<"\n";
        }
        else if (a<c && c<b){
            cout<<"Case "<<i<<": "<<c<<"\n";
        }
        else if (a>b && b>c){
            cout<<"Case "<<i<<": "<<b<<"\n";
        }
        else if (b>a && a>c){
            cout<<"Case "<<i<<": "<<a<<"\n";
        }
        else {
            cout<<"Case "<<i<<": "<<c<<"\n";
        }
    }
    return 0;
}
