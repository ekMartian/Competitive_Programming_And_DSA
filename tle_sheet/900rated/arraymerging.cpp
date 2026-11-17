#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        vector <int> arra;
        for (int i = 0 ; i < n; i++)
        {
            int a;
            cin >> a;
            arra.push_back(a);
        }
        vector <int> arrb;
        for (int i = 0 ; i < n; i++)
        {
            int b;
            cin >> b;
            arrb.push_back(b);
        }
        map <int, int> mapa;
        map <int, int> mapb;
        int doing = arra[0];
        int count = 1;
        int maximum = 1;
        for (int i = 0; i < n; i++)
        {
            int a = arra[i];
            if (mapa.find(a) == mapa.end())
            {
                mapa.insert({a, 1});
            }
        }
        for (int i = 0; i < n; i++)
        {
            int b = arrb[i];
            if (mapb.find(b) == mapb.end())
            {
                mapb.insert({b, 1});
            }
        }
        for (int i = 1; i < n; i++)
        {
            int a = arra[i];
            if (arra[i] == doing)
            {
                count++;
                maximum = max(maximum, count);
                mapa[a] = maximum;
            }
            else
            {
                maximum = mapa[a];
                doing = a;
                count = 1;
            }
        }
        doing = arrb[0];
        count = 1;
        maximum = 1;
        for (int i = 1; i < n; i++)
        {
            int b = arrb[i];
            if (arrb[i] == doing)
            {
                count++;
                maximum = max(maximum, count);
                mapb[b] = maximum;
            }
            else
            {
                maximum = mapb[b];
                doing = b;
                count = 1;
            }
        }
        int ans = 0;
        for (auto it = mapa.begin(); it != mapa.end(); it++)
        {
            int here = it->first;
            int one = it->second;
            int two = 0;
            if (mapb.find(here) != mapb.end())
            {
                two = mapb[here];
            }

            int sum = one + two;
            ans = max(ans, sum);

        }
        for (auto it = mapb.begin(); it != mapb.end(); it++)
        {
            int here = it->first;
            int one = it->second;
            int two = 0;
            if (mapa.find(here) != mapa.end())
            {
                two = mapa[here];
                
            }
            int sum = one + two;
            ans = max(ans, sum);

        }
        cout << ans << endl;
        
    }
}