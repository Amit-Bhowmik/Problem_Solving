#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

    ll n;
    cin >> n;
    if (n <= 4)
        cout << "-1" << '\n';
    else
    {
        cout << 1 << " " << 3 << " ";
        for (ll i = 7; i <= n; i += 2)
        {
            cout << i << " ";
        }
        cout << 5 << " " << 4 << " " << 2 << " ";
        for (ll i = 6; i <= n; i += 2)
        {
            cout << i << " ";
        }
        '\n';
    }

    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}