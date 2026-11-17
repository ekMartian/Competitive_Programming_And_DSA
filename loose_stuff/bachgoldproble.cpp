#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        while (n > 0)
        {
            cout << 2 << " ";
            n-=2;
        }
        cout << endl;
    }
    else
    {
        int m = n - 3;
        cout << m / 2 + 1 << endl;
        while (m > 0)
        {
            cout << 2 << " ";
            m-=2;
        }
        cout << 3 << endl;
    }
}