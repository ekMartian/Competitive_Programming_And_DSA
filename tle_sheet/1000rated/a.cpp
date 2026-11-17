#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> ps;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            ps.push_back(p);
        }
        int location;
        for (int i = 0; i < n; i++)
        {
            int p;
            p = ps[i];
            if (p == n)
            {
                location = i;
            }
            // ps.push_back(p);
        }
        if (location == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << ps[i] << " ";
            }
            cout << endl;
             
        }
        else
        {
            ps[location] = ps[0];
            ps[0] = n;
            for (int i = 0; i < n; i++)
            {
                cout << ps[i] << " ";
            }
            cout << endl;
        }

    }
}