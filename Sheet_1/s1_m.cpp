#include<iostream>
using namespace std;

int main()
{
    char x;
    cin >>x;
    int ascii = (int)x;
    if (ascii >= 48 && ascii <= 57)
        cout<<"IS DIGIT\n";
    else if (ascii >= 65 && ascii <= 90)
        cout<<"ALPHA\nIS CAPITAL\n";
    else
        cout<<"ALPHA\nIS SMALL\n";
    return 0;
}
