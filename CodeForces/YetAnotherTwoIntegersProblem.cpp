<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 

    while (t--)
    {
        int a, b;
        cin >> a >> b; 

        int diff = abs(a - b); 

        int count = diff / 10; 

        if (diff % 10 != 0)
        {
            count += 1; 
        }

        cout << count << endl; 
    }

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 

    while (t--)
    {
        int a, b;
        cin >> a >> b; 

        int diff = abs(a - b); 

        int count = diff / 10; 

        if (diff % 10 != 0)
        {
            count += 1; 
        }

        cout << count << endl; 
    }

    return 0;
}
>>>>>>> 743ed38 (cf)