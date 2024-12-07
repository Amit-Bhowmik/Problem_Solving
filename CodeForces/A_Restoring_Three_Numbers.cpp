typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }
    sort(x, x + 4);

    int a = (x[0] + x[1] - x[2]) / 2;
    int b = (x[0] + x[2] - x[1]) / 2;
    int c = (x[1] + x[2] - x[0]) / 2;

    cout << a << " " << b << " " << c << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}