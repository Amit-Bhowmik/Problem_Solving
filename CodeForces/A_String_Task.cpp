#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    
    string r = "";
    for (char c : s)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            r += c;
        }
    }
    cout << '.';
    for (auto i = 0; i < r.size(); ++i)
    {
        cout << r[i];
        if (i != r.size() - 1)
        {
            cout << ".";
        }
    }
    cout << '\n';

    return 0;
}
