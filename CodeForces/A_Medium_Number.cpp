#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a > c && a < b))
    {
        cout << a << '\n';
    }
    else if ((b > a && b < c) || (b > c && b < a))
    {
        cout << b << '\n';
    }
    else
    {
        cout << c << '\n';
    }
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