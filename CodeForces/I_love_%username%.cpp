<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    
    int best = arr[0], worst = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > best)
        {
            best = arr[i];
            c++;
        }
        else if (arr[i] < worst) {
            worst = arr[i];
            ++c;
        }
        
    }
    cout << c << endl;
    
    

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    
    int best = arr[0], worst = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > best)
        {
            best = arr[i];
            c++;
        }
        else if (arr[i] < worst) {
            worst = arr[i];
            ++c;
        }
        
    }
    cout << c << endl;
    
    

    return 0;
>>>>>>> 743ed38 (cf)
}