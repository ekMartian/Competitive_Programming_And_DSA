#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;
        long long int xdiff = abs(xk - xq);
        long long int ydiff = abs(yk - yq);
        if (xdiff == 0 && ydiff == 2*b)
        {
            cout << 2 << endl;
        }
        else if (ydiff == 0 && xdiff == 2*a)
        {

            cout << 2 << endl;
        }
        else if (xdiff == 2*a && ydiff == 2*b)
        {

            cout << 1 << endl;
        }
        else if (xdiff == a+b && ydiff == a+b)
        {
            cout << 2 << endl;
        }
        else if (xdiff == 0 && ydiff == 2*a)
        {
            cout << 2 << endl;
        }
        else if (ydiff == 0 && xdiff == 2*b)
        {

            cout << 2 << endl;
        }
        else if (xdiff == 2*b && ydiff == 2*a)
        {

            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}