#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char ch[t];

    for (int i = 0; i < t; i++)
    {
        cin >> ch[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (ch[i] == 'c' || ch[i] == 'o' || ch[i] == 'd' || ch[i] == 'e' || ch[i] == 'f' || ch[i] == 'o' || ch[i] == 'r' || ch[i] == 'c' || ch[i] == 'e' || ch[i] == 's')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}