#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if ((n&1) == 0)
        {
            n/=2;
        }
        else
        {
            n = 3*n + 1;
        }
        cout << n << " ";
    }
    // cout << endl;

}

// keep long long always
// see that overflows might occur