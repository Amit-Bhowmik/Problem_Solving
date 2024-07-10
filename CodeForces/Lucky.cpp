<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ticket;
        cin >> ticket;
        if (ticket.length() == 6)
        {
            string firstThree = ticket.substr(0, 3);
            string lastThree = ticket.substr(ticket.length() - 3, 3);

            int firstThreeSum = 0;
            for (char ch : firstThree)
            {
                firstThreeSum += ch - '0';
            }
            int lastThreeSum = 0;
            for (char ch : lastThree)
            {
                lastThreeSum += ch - '0';
            }

            if (firstThreeSum == lastThreeSum)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "Envalid input" << endl;
        }
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
        string ticket;
        cin >> ticket;
        if (ticket.length() == 6)
        {
            string firstThree = ticket.substr(0, 3);
            string lastThree = ticket.substr(ticket.length() - 3, 3);

            int firstThreeSum = 0;
            for (char ch : firstThree)
            {
                firstThreeSum += ch - '0';
            }
            int lastThreeSum = 0;
            for (char ch : lastThree)
            {
                lastThreeSum += ch - '0';
            }

            if (firstThreeSum == lastThreeSum)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "Envalid input" << endl;
        }
    }

    return 0;
>>>>>>> 743ed38 (cf)
}