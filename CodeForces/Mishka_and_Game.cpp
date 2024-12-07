#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int mWin = 0, cWin = 0;
    for (int i = 0; i < n; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
        {
            mWin++;
        }
        else if (c > m)
        {
            cWin++;
        }
    }

    if (mWin > cWin)
    {
        cout << "Mishka" << endl;
    }
    else if (cWin > mWin)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
