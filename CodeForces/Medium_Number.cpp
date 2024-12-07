#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a < b && b < c) || (c < b && b < a))
        {
            cout << b << endl;
        }

        else if ((b < a && a < c) || (c < a && a < b))
        {
            cout << a << endl;
        }

        else
        {
            cout << c << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
