#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;
    int n;
    n = st.size();
    int m;
    cin >> m;
    vector <pair<int, int>> queries;
    for (int i = 0; i < m; i++)
    {
        int a; int b;
        cin >> a >> b;
        queries.push_back(make_pair(a, b));

    }
    vector <int> pref;
    int yes = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (st[i] == st[i+1])
        {
            yes++;
            
        }
        pref.push_back(yes);
    }
    for (int i = 0; i < m; i++)
    {
        // int a = u16streampos
        int a = queries[i].first-1;
        int b = queries[i].second-1;
        if (a != 0)
        cout << pref[b-1] - pref[a-1] << endl;
        else
        cout << pref[b-1] << endl;
    }
}