#include <iostream>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, k;
    cin >> n >> k;

    ll oddNum = (n + 1) / 2;

    if (k <= oddNum)
    {

        cout << 2 * k - 1 << endl;
    }
    else
    {

        k -= oddNum;
        cout << 2 * k << endl;
    }

    return 0;
}
