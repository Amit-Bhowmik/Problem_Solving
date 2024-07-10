#include <bits/stdc++.h>
using namespace std;

bool liked(int n){
    return n % 3 != 0 && n % 10 != 3;
}

int polycarp(int k){
    int count = 0;
    int n = 0;
    while (count < k)
    {
        n++;
        if (liked(n))
        {
            count++;
        }
    }
    return n;
    
}

int main()
{
    
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;
        cout << polycarp(k) << endl;
    }
    
    return 0;
}