#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        vector <int> diffs;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                diffs.push_back(arr[i] - arr[i-1]);
            }
            int currentmax = 0;
        int current = 0;
        bool flag = false;
        for (int i = 0; i < n-1; i++)
        {
            if (diffs[i] <= k && flag == false)
            {
                current = 1;
                flag = true;
            }
            else if (diffs[i] <= k && flag == true)
            {
                current++;
            }
            else if (diffs[i] > k)
            {
                current = 0;
            }
            currentmax = max(currentmax, current);
        
        }
        int taking = currentmax + 1;
        int removing = n - taking;
        cout << removing << endl;
        }
        


    }
}