
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        string ch;
        cin >> ch;

        for (int j = 0; j < 4; j++)
        {
            if (ch[j] == '#')
            {
                c[n - i - 1] = j + 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}