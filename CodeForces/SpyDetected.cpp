<<<<<<< HEAD
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int common;
        if (a[0] == a[1])
        {
            common = a[0];
        }
        else if (a[0] == a[2])
        {
            common = a[0];
        }
        else
        {
            common = a[1];
        }

        int unique = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != common)
            {
                unique = i + 1;
                break;
            }
        }
        cout << unique << endl;
    }

    return 0;
=======
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int common;
        if (a[0] == a[1])
        {
            common = a[0];
        }
        else if (a[0] == a[2])
        {
            common = a[0];
        }
        else
        {
            common = a[1];
        }

        int unique = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != common)
            {
                unique = i + 1;
                break;
            }
        }
        cout << unique << endl;
    }

    return 0;
>>>>>>> 743ed38 (cf)
}