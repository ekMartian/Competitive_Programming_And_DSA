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
        vector <bool> q(n, false);
        vector <int> p;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            p.push_back(a);
        }
        vector <int> r;
        int count = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     q[p[i] - 1] = true; 
        // }
        int stops = 0;

        for (int i = 0; i < n; i++)
        {
            q[p[i] - 1] = true;
            int here = i+1;
            if (q[i] == true)
            {
                here--;
                stops++;
            }
            int toreduce = stops-1;
            here-=toreduce;
            r.push_back(here);

        }
        sort(r.begin(), r.end());
        reverse(r.begin(), r.end());
        cout << r[0] << endl;


    }
}
