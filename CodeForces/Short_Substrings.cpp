#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        string b;
        cin >> b;

        string a;
        a += b[0];

        for (int i = 1; i < b.size(); i += 2)
        {
            a += b[i];
        }

        cout << a << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
