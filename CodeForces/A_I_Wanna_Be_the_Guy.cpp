#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int n, p, q, px, qx;
    cin >> n >> p;
    set<int> levels;
    for (int i = 0; i < p; i++)
    {
        cin >> px;
        levels.insert(px);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> qx;
        levels.insert(qx);
    }
    if (levels.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}