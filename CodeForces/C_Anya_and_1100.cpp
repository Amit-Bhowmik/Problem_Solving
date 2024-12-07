#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    ll q;
    cin >> q;

    ll ct = 0;
    for (size_t i = 0; i + 3 < s.size(); i++)
    {
        if (s.substr(i, 4) == "1100")
        {
            ct++;
        }
    }

    while (q--)
    {
        ll i;
        char v;
        cin >> i >> v;
        i--;

        for (ll j = max(0LL, i - 3); j <= i && j + 3 < s.size(); j++)
        {
            if (s.substr(j, 4) == "1100")
            {
                ct--;
            }
        }

        s[i] = v;

        for (ll j = max(0LL, i - 3); j <= i && j + 3 < s.size(); j++)
        {
            if (s.substr(j, 4) == "1100")
            {
                ct++;
            }
        }

        if (ct > 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
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
