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
        vector <int> odds;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            if ((a & 1) == 1)
            {
                odds.push_back(a);
                count++;
            }

        }
        if ((count & 1) == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(odds.begin(), odds.end());
            bool flag = false;
            for (int i = 0; i < count; i++)
            {
                if (((odds[i] / 2) & 1) == 0)
                {
                    cout << 1 << endl;
                    flag = true;
                }

            }
            if (flag == false)
            {
                int todo = odds[0];
                int ans = 0;
                while ((todo & 1) != 0)
                {
                    todo = todo/2;
                    ans++;

                }
                cout << ans << endl;
                // vector <int> times;
                // for (int i = 0; i < count; i++)
                // {
                //     if 
                // }
            }
        }
        // sort()
    }
}