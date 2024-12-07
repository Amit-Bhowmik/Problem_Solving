#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int w = (k * l);
    int x = w / nl;
    int y = c * d;
    int z = p / np;

    int sol = min({x, y, z}) / n;

    cout << sol << endl;

    return 0;
}

