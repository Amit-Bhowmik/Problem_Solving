#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;


ll me(ll b, ll exp, ll mod)
{
    ll r = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            r = (r * b) % mod;
        }
        b = (b * b) % mod;
        exp /= 2;
    }
    return r;
}


ll sop(ll n, ll k)
{
    vector<ll> p(n + 1, 1); 
    for (ll i = 1; i <= n; ++i)
    {
        p[i] = me(i, k, MOD);
    }

    ll sum = 0;
    for (ll i = 1; i <= n; ++i)
    {
        sum = (sum + p[i]) % MOD;
    }
    return sum;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    cout << sop(n, k) << endl;
    return 0;
}
