#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int r[q];

    for (ll i = 0; i < q; i++)
    {
        char ch;
        cin >> ch;

        ll pos = -1;
        string str = "";

        for (ll j = 0; j < n; j++)
        {
            string t = s;
            t[j] = ch;

            if (t > str)
            {
                str = t;
                pos = j+1;
            }
        }

        r[i] = pos;
        s[pos - 1] = ch;
    }

    for (ll i = 0; i < q; ++i)
    {
        cout << r[i] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
