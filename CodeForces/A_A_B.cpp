#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;

    if (ch == '+')
        cout << a + b << "\n";

    return;
}
int main()
{
    ios_b::sync_with_stdio(false);
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