#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if ((a[i] - a[i - 1]) == -1)
            swap(a[i], a[i - 1]);
    }
    cout << (is_sorted(a.begin(), a.end()) ? "YES\n" : "NO\n");

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