#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    sort(s3.begin(), s3.end());

    string s4 = s1 + s2;
    sort(s4.begin(), s4.end());

    cout << ((s3 == s4) ? "YES" : "NO") << '\n';

    return 0;
}