#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector <int> colours;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        colours.push_back(a);
    }
    vector <pair<int, int>> where(50);
    for (int i = 0; i < 50; i++)
    {
        where[i] = {i+1, INT_MAX};

    }
    for (int i = 0; i < n; i++)
    {
        int a;
        a = colours[i];
        if (where[a-1].second == INT_MAX)
        {
            where[a-1].second = i+1;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        int j = 0;
        while (where[j].first != query)
        {
            j++;
        }
        cout << where[j].second << " ";
        int retainer = where[j].second;
        for (int k = 0; k < 50; k++)
        {
            if (where[k].second < retainer)
            {
                where[k].second++;
            }
        }
        where[j].second = 1;



    }
    cout << endl;
    
}