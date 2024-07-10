<<<<<<< HEAD
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    string rev(s.rbegin(), s.rend());
    if (t == rev)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    return 0;
=======
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    string rev(s.rbegin(), s.rend());
    if (t == rev)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    return 0;
>>>>>>> 743ed38 (cf)
}