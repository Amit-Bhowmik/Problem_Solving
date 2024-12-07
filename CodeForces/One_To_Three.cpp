#include <bits/stdc++.h>
using namespace std;

int minSum(vector<int> &a)
{
    int n = a.size();
    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
    }

    for (int i = 1; i < n - 1; ++i)
    {
        if (a[i - 1] + a[i + 1] == 4)
        {
            sum -= a[i];
            a[i] = 4 - a[i];
            sum += a[i];
        }
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << minSum(a) << endl;
    }
    return 0;
}
