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
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        int q;
        cin >> q;
        vector <pair <int, int>> queries;
        for (int i = 0; i < q; i++)
        {
            int a; int b;
            cin >> a; cin >> b;
            queries.push_back({a, b});
        }
        for (int i = 0; i < q; i++)
        {
            int a = queries[i].first;
            int b = queries[i].second;
            vector <int> arrhere = arr;
            sort(arrhere.begin() + a-1, arrhere.begin() + b-1);
            if (arrhere[a-1] == arrhere[b-1])
            {
                cout << -1 << " " << -1 << endl;
            }
            else
            {
                cout << arrhere[a-1] << " " << arrhere[b-1];
                cout << endl;
            }
        }

    }
}