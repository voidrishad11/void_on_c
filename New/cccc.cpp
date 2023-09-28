#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v;
        int n = 10;
        vector<int> pts(10, 0);
        for (int i = 0; i < 10; i++)
        {
            string str;
            cin >> str;
            v.push_back(str);
        }
        int sumOfPoints = 0;
        for (int i = 0; i < v.size(); i++)
        {
            string str = v[i];
            for (int j = 0; j < str.length(); j++)
            {
                if (array[i][j]==c)
                {
                    switch (i)
                    {
                        case 0:
                        case 9:
                            point += 1;
                        case 1:
                        case 8:
                            switch (j)
                            {
                                case 0:
                                case 9:
                                    point += 1;
                                default:
                                    point += 2;
                                    break;
                            }
                        case 2:
                        case 7:
                            switch (j)
                            {
                                case 0:
                                case 9:
                                    point += 1;
                                case 1:
                                case 8:
                                    point += 2;
                                default:
                                    point += 3;
                                    break;
                            }
                        case 3:
                        case 6:
                            switch (j)
                            {
                                case 0:
                                case 9:
                                    point += 1;
                                case 1:
                                case 8:
                                    point += 2;
                                case 2:
                                case 7:
                                    point += 3;
                                default:
                                    point += 4;
                                    break;
                            }
                        default:
                            switch (j)
                            {
                                case 0:
                                case 9:
                                    point += 1;
                                case 1:
                                case 8:
                                    point += 2;
                                case 2:
                                case 7:
                                    point += 3;
                                case 3:
                                case 6:
                                    point += 4;
                                default:
                                    point += 5;
                                    break;
                            }
                            break;
                    }
                }
            }
        }

        cout << sumOfPoints << endl;
    }
}
