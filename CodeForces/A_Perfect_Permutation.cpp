#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;

    if (n % 2 == 0)
    {
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
    }
    else
    {
        cout << -1 << '\n';
    }

    return 0;
}
