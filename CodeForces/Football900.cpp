#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0;
    char ch = '0';

    for (int i = 0; i < str.length(); i++)
    {

        if (count >= 7)
        {
            break;
        }

        if (str[i] != ch)
        {
            ch = str[i];
            count = 1;
        }

        else
        {
            count++;
        }
    }
    cout << (count >= 7 ? "YES" : "NO") << endl;

    return 0;
}