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
        vector <int> diffs;
        int a;
        cin >> a;

        for (int i = 1; i < n; i++)
        {
            int b;
            cin >> b;
            diffs.push_back(b - a);
            a = b;
        }
        sort(diffs.begin(), diffs.end());
        int c = diffs[0];
        if (c < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << c/2 + 1 << endl;
        }

    }
}