#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == 3 && (b==1 || b == 2))
    {
        cout << a - b << endl;
    }
    else if (a == 2 && b == 1)
    {
        cout << a + b << endl;
    }
    else if (a == 1 && b == 2)
    {
        cout << a + b << endl;
    }
    else if(b == 3 && a == 1 || a==2)
    {
        cout << b - a << endl;
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}