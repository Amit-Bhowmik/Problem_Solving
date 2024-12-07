#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int maxx = max(x, y);
    int chanceToWin = 6 - maxx + 1;

    int gcd = __gcd(chanceToWin, 6);
    chanceToWin /= gcd;
    int denominator = 6 / gcd;

    cout << chanceToWin << "/" << denominator << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}