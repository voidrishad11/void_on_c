#include<iostream>
using namespace std;

int main()
{
    char x;
    int y;
    cin >>x;
    int ascii = (int)x;

    if (ascii >= 65 && ascii <= 90)
    {
        y = ascii + 32;
        char z = char(y);
        cout <<z<<"\n";
    }
    else
    {
        y = ascii -32;
        char z = char(y);
        cout <<z<<"\n";
    }
    return 0;
}
