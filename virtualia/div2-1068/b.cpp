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
        vector <int> as;
        vector <int> bs;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            int b; cin >> b;
            as.push_back(a);
            bs.push_back(b);

        }
        int currentmin = 0;
        int currentmax = 0;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            currentmin = min(k-as[i], bs[i] - k);
            currentmax = max(k-as[i], bs[i] - k);
        }
        cout << currentmax << endl;
    }
}