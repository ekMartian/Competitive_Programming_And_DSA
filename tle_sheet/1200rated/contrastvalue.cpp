#include <bits/stdc++.h>
using namespace std;


bool in_order(int a, int b, int c)
{
    if ((b >= a && b <= c) || (b <= a && b >= c))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <pair <int, bool>> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back({a, false});
        }
        int at = arr[0].first;
        for (int i = 1; i < n-1; i++)
        {
            int a = arr[i-1].first;
            int b = arr[i].first;
            int c = arr[i+1].first;
            if (in_order(at, b, c) == true)
            {
                arr[i].second = true;

            }
            else
            {
                at = arr[i].first;
            }
        }
        vector <int> ans;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].second == false)
            {
                ans.push_back(arr[i].first);
                // cout << arr[i].first << " ";
            }
        }
        // cout << endl;
        if (ans.size() == 2 && ans[0] == ans[1])
        {
            cout << 1 << endl;
        }
        else
        {
            cout << ans.size() << endl;
        }

        
    }
}