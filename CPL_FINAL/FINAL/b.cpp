#include<iostream>
#include<string>
using namespace std;
int main()
{
    string l1,l2;
    int i;
    cin >>l1>>l2;
    int a,b,theif_try,flag=0,temp;
    a = stoi(l1);
    b = stoi(l2);
    for (theif_try = 0000;theif_try<=9999;theif_try++)
    {
        if (a==theif_try)
        {
            cout<<"yes";
            flag++;
            break;
        }
        else
        {
            temp = a;
            a = b;
            b = temp;
        }
    }
    if (flag== 0)
    {
        cout<<"no";
    }
    return 0;
}


