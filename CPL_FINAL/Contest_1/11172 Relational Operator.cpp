#include<iostream>
using namespace std;
int main()
{
    long long a,b,i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        if (a < b){
            cout<<"<\n";
        }
        else if (a > b){
            cout<<">\n";
        }
        else{
            cout<<"=\n";
        }
    }
    return 0;
}
