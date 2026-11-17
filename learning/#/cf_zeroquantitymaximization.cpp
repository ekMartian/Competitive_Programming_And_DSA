#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <double> a;
    vector <double> b;
    int preexisting = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        double ai;
        cin >> ai;
        a.push_back(ai);
        
    }
    for (int i = 0; i < n; i++)
    {
        double bi;
        cin >> bi;
        b.push_back(bi);
    }
    map <double, int> ratios;
    for (int i = 0; i < n; i++)
    {
        double r;
        if (a[i] != 0)
        {
            r = -1 * b[i] / a[i];

        }
        else
        {
            if (b[i] == 0)
            {
                preexisting++;
            }
            continue;
        }
        
        if (ratios.find(r) != ratios.end())
        {
            ratios[r]++;
        }
        else
        {
            // cout << " entered at " << r << endl;
            ratios.insert({r, 1});
            count++;
        }
    }
    // cout << "count is " << count << endl;
    int maximum = 0;
    for (auto& p : ratios)
    {
        // cout << p.second << " " << endl;
        maximum = max(maximum, p.second);
    }
    // cout << maximum << endl;
    cout << maximum + preexisting << endl;
}

// local variable to loops etc, is another thing to check. 