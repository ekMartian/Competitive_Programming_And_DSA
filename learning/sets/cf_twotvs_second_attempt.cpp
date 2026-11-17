#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <pair<int, int>> firsts;
    vector <pair<int, int>> dummyforseconds;
    vector <pair<int, int>> seconds;
    vector <pair<int, int>> actual;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        actual.push_back({a, 1});
        actual.push_back({b+1, -1});
    }
    int ongoing = 0;
    sort(actual.begin(), actual.end());
    sort(actual.begin(), actual.end());
    for (int i = 0; i < 2*n; i++)
    {
        int a = actual[i].second;
        if (a == 1)
        {
            ongoing++;
        }
        else
        {
            ongoing--;
        }
        if (ongoing > 2)
        {
            cout << "NO" << endl;
            break;
        }
        else
        {
            continue;
        }
        // [

        // ]
    }
    if (ongoing == 0)
    {
        cout << "YES" << endl;    }
    // for (int i = 0; i < n; i++)
    // {




    // }
}