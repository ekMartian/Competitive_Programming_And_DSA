#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    int count = 0;
    vector <int> apt;
    vector <int> acc;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        acc.push_back(a);
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        apt.push_back(a);
    }
    sort(acc.begin(), acc.end());
    sort(apt.begin(), apt.end());
    int at = 0;
    for (int i = 0; i < n; i++)
    {
        if (at >= m)
        {
            break;
        }
        if (abs(acc[i] - apt[at]) <= k)
        {
            count++;
            at++;
        }
        else
        {
            if (acc[i] < apt[at])
            {
                continue;
            }
            else
            {
                at++;
                i--;

            }
        }
    }
    cout << count << endl;

}

// at
// you got that good good good energy