#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char p = '1';
        vector<int> v;
        for (char c : s)
        {
            if (c == '1')
            {
                v.push_back(1);
            }
            if (c == '0' && p == '1')
            {
                v.push_back(0);
            }
            p = c;
        }
        int once = 0, zeros = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
            {
                once++;
            }
            else
            {
                zeros++;
            }
        }
        if (once > zeros)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}