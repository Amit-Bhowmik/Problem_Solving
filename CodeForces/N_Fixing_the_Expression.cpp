#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    if (s[1] == '>')
    {
        if ((s[0] > s[2]))
        {
            cout << s[0] << ">" << s[2] << endl;
        }
        else if ((s[0] == s[2]))
        {
            cout << s[0] << "=" << s[2] << endl;
        }
        else
        {
            cout << s[0] << "<" << s[2] << endl;
        }
    }
    else if (s[1] == '<')
    {
        if ((s[0] < s[2]))
        {
            cout << s[0] << "<" << s[2] << endl;
        }
        else if ((s[0] == s[2]))
        {
            cout << s[0] << "=" << s[2] << endl;
        }
        else
        {
            cout << s[0] << ">" << s[2] << endl;
        }
    }
    else if (s[1] == '=')
    {
        if ((s[0] == s[2]))
        {
            cout << s[0] << "=" << s[2] << endl;
        }
        else if ((s[0] > s[2]))
        {
            cout << s[0] << ">" << s[2] << endl;
        }
        else
        {
            cout << s[0] << "<" << s[2] << endl;
        }
    }

    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}