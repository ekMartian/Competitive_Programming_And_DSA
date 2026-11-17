#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map <int, int> counts;
    for (int i = 0; i < n; i++)
    {
        int a;
        int b;
        cin >> a;
        cin >> b;
        for (int j = a; j <= b; j++)
        {
            if (counts.find(j) == counts.end())
            {
                counts.insert({j, 1});
            }
            else
            {
                counts[j]++;
            }
        }
    }
    int maximum = 0;
    for (auto& p : counts)
    {
        maximum = max(maximum, p.second);
    }
    if (maximum > 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}