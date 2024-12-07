#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x, y;
        cin >> x >> y;

        int step = max(x, y);
        cout << ((y == 0 || step <= y) ? "YES" : "NO") << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
