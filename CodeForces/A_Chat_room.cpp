#include <bits/stdc++.h>
using namespace std;

bool b(const string &s, const string &t)
{
    auto j = 0; 

    for (char ch : s)
    {
        if (ch == t[j])
        {
            j++;
        }
        if (j == t.size())
        {
            return true; 
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string t = "hello";

    cout << (b(s, t) ? "YES" : "NO") << '\n';

    return 0;
}
