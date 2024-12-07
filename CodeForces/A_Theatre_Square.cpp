#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll m, n, a, x, y;
    cin >> m >> n >> a;
    if (m % a == 0)
        x = m / a;
    else
        x = m / a + 1;
    if (n % a == 0)
        y = n / a;
    else
        y = n / a + 1;

    cout << x * y << '\n';
    return 0;
}