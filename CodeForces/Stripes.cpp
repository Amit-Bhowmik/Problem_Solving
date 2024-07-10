#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char a[8][8];
    int count = 0;
    bool f = false;
    for (int i = 0; i < 8; i++)
    {
        count = 0;
        for (int j = 0; j < 8; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                count++;
            }
            if (count == 8)
                f = true;
        }
    }
    cout << (f ? 'R' : 'B') << endl;
    return;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}