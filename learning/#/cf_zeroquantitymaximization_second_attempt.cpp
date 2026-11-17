#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <long long int> a;
    vector <long long int> b;
    int preexisting = 0;
    for (int i = 0; i < n; i++)
    {
        long long int ai;
        cin >> ai;
        a.push_back(ai);
    }
    for (int i = 0; i < n; i++)
    {
        long long int bi;
        cin >> bi;
        b.push_back(bi);
    }
    map <pair<long long int, long long int>, int> ratios;
    for (int i = 0; i < n; i++)
    {
        pair <long long int, long long int> r;
        if (a[i] != 0)
        {
            long long int hcf = gcd(a[i], b[i]);
            long long int num = -1 * b[i] / hcf;
            long long int denom = a[i] / hcf;
            if (denom < 0)
            {
                denom = -1 * denom;
                num = -1 * num;
            }
            r = {num, denom};

        }
        else
        {
            if (b[i] == 0)
            {
                preexisting++;
            }
            continue;
        }
        // long long int hcf = gcd(a[i], b[i]);
        // long long int num = -1 * b[i] / hcf;
        // long long int denom = a[i] / hcf;
        if (ratios.find(r) != ratios.end())
        {
            ratios[r]++;


        }
        else
        {
            ratios.insert({r, 1});
        }

    }
    int maximum = 0;
    for (auto& p : ratios)
    {
        maximum = max(maximum, p.second);
    }
    cout << preexisting + maximum << endl;

}

// take care of signs. // always run it for edge cases, and for nrgative sign sutff which is also an edge case 