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
        int hcf;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            if (i == 0)
            {
                hcf = a;
            }
            else
            {
                hcf = gcd (hcf, a);
            }
        }
        int count = 0;
        vector <pair<int, bool>> tomanage;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == hcf)
            {
                continue;
            }
            else
            {
                tomanage.push_back({arr[i], false});
                count++;
            }
        }
        int ans = count;
        for (int i = 0; i < count; i++)
        {
            for (int j = i; j < count; j++)
            {
                if (gcd(tomanage[i].first, tomanage[j].first) == hcf && tomanage[i].second == false && tomanage[j].second == false)
                {
                    // ans++;
                    ans--;
                    tomanage[i].second = true;
                    tomanage[j].second = true;
                }
            }
        }
        cout << ans << endl;


    }
}