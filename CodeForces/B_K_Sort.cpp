#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll s = 0, m = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            s += (a[i] - a[i + 1]);
            m = max(m, a[i] - a[i + 1]);
            a[i + 1] = a[i];
        }
    }
    s += m;
    cout << s << "\n";

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