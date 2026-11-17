#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    int cals = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int here = s[i] - '0';
        
        // cout << here << endl;
        if (here == 1)
        {
            // cout << a << endl;
            cals+=a;

        }
        if (here == 2)
        {
            // cout << b << endl;
            cals+=b;

        }
        if (here == 3)
        {
            // cout << c << endl;
            cals+=c;

        }
        if (here == 4)
        {
            // cout << d << endl;
            cals+=d;

        }
    }
    cout << cals << endl;
}