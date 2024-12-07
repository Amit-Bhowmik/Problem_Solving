#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll v;
    for (ll i = 1; i <= 5; i++)
    {
        for (ll j = 1; j <= 5; j++)
        {
            cin >> v;
            if (v == 1)
            {
                cout << abs(3 - i) + abs(3 - j) << '\n';
            }
        }
    }

    return 0;
}