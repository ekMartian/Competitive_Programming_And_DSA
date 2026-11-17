#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int forb = -1;
        if ((c+a) % 2 == 0)
        {
            forb = (c+a)/2;
        }
        int fora = b - (c - b);
        int forc = b + (b - a);

        if (fora % a == 0 && fora > 0)
        {
            cout << "YES" << endl;
        }
        else if (forb % b == 0 && forb > 0)
        {
            cout << "YES" << endl;
        }
        else if (forc % c == 0 && forc > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
}