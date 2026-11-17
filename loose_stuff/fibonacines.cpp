#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> d >> e;
        c = 0;
        int counter = 0;
        int maximum = 0;
        c = a + b;
        counter++;
        if (d == c + b)
        {
            counter++;
        }
        if (e == d + c)
        {
            counter++;
        }
        maximum = max(maximum, counter);
        counter = 0;

        c = d - b;
        counter++;
        if (a + b == c)
        {
            counter++;
        }
        if (d + e == c)
        {
            counter++;
        }
        maximum = max(counter, maximum);
        counter = 0;

        c = e - d;
        counter++;
        if (a + b == c)
        {
            counter++;
        }
        if (b + c == d)
        {
            counter++;
        }
        maximum = max(maximum, counter);
        cout << maximum << endl;

    }
}