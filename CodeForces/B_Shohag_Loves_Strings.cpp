#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    ll f = 0, n = s.size();
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << s[i] << s[i] << '\n';
            f = 1;
            return;
        }
    }

    for (ll i = 0; i < n - 2; i++)
    {
        vector<char> v;
        v.push_back(s[i]);
        v.push_back(s[i + 1]);
        v.push_back(s[i + 2]);
        if (v.size() == 3)
        {
            cout << s[i] << s[i + 1] << s[i + 2] << '\n';
            f = 1;
            return;
        }
    }

    if (f == 0)
    {
        cout << "-1" << '\n';
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