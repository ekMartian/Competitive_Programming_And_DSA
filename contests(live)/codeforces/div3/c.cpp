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
        int x, y;
        cin >> x >> y;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        vector <int> diffs;
        int ans = gcd(x, y);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int d = abs(arr[i] - (i+1));
            if (d % ans == 0)
            {
                continue;

            }
            else flag = false;
        }
        if (flag == false) cout << "no" << endl;
        else
        {
            cout << "yes" << endl;
        }   
    }
}