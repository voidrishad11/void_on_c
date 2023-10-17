#include<iostream>
#include<string.h>
using namespace std;
void strrev(char* str)
{
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    char s[10000000],c[10000000];
    int a;
    cin>>s;
    strcpy(c,s);
    strrev(s);
    a = stoi(c)
    if (c == s)
        cout<<a<<"\n"<<"YES\n";
    else
        cout<<a<<"\n"<<"NO\n";
}
