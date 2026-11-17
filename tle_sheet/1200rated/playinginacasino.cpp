#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<long long int>>numbers(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long int a;
                cin >> a;
                numbers[i].push_back(a);
            }
        }
        vector<vector<long long int>>turned(m);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                turned[i].push_back(numbers[j][i]);
            }
        }
        long long int mega = 0;
        for (int i = 0; i < m; i++)
        {
            vector <long long int> here = turned[i];
            sort(here.rbegin(), here.rend());
            long long int factor = n - 1;
            long long int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum = sum + factor * (here[j]);
                factor-=2;
            }
            mega+=sum;

        }
        cout << mega << endl;
    }
}
// equtiosn and time cplemity and braininess (comes with time, trust me.)