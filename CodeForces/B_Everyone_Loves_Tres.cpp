typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1 || n == 3)
        {
            cout << -1 << endl;
            continue;
        }

        if (n % 2 == 0)
        {
            string result;
            result += "33";
            result.append(n - 4, '6');
            result += "66";
            cout << result << endl;
        }
        
        else
        {
            string result = 0;
            result += "3";
            result.append(n - 3, '6');
            result += "6";
            cout << result << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}