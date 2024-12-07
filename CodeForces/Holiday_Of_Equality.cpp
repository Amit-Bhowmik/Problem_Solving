<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int welfare[n];

    for (int i = 0; i < n; i++)
    {
        cin >> welfare[i];
    }

    int maxWelfare = *max_element(welfare, welfare + n);

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += maxWelfare - welfare[i];
    }

    cout << total << endl;

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int welfare[n];

    for (int i = 0; i < n; i++)
    {
        cin >> welfare[i];
    }

    int maxWelfare = *max_element(welfare, welfare + n);

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += maxWelfare - welfare[i];
    }

    cout << total << endl;

    return 0;
}
>>>>>>> 743ed38 (cf)
