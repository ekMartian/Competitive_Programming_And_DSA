#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;
        set <pair<int, int>> k;
        k.push_back({xk+a, yk+b});
        k.push_back({xk+b, yk+a});
        k.push_back({xk-a, yk-b});
        k.push_back({xk-b, yk-a});
        k.push_back({xk-a, yk+b});
        k.push_back({xk+a, yk-b});
        k.push_back({xk-b, yk+a});
        k.push_back({xk+b, yk-a});

        vector <pair<int, int>> q;
        q.push_back({xq+a, yq+b});
        q.push_back({xq+b, yq+a});
        q.push_back({xq-a, yq-b});
        q.push_back({xq-b, yq-a});
        q.push_back({xq-a, yq+b});
        q.push_back({xq+a, yq-b});
        q.push_back({xq-b, yq+a});
        q.push_back({xq+b, yq-a});

        int counter = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (get<0>(k[i]) == get<0>(q[j]) && get<1>(k[i]) == get<1>(q[j]))
                {
                    counter++;
                }
            }
        }
        cout << counter << endl;

        // for (int i = 0; i < 8; i++)
        // {


        // }

    }
}