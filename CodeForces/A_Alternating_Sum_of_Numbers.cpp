typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int evenSum = 0; 
    int oddSum = 0; 
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) 
        {
            evenSum += a[i];
        }
        else 
        {
            oddSum += a[i];
        }
    }
    cout << evenSum - oddSum << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}