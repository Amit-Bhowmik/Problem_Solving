#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> n;
    for (char ch : s)
    {
        if (isdigit(ch))
        {
            n.push_back(ch - '0');
        }
    }
    sort(n.begin(), n.end());
    for (size_t i = 0; i < n.size(); i++)
    {
        cout << n[i];
        if (i < n.size() - 1)
        {
            cout << "+";
        }
    }

    return 0;
}