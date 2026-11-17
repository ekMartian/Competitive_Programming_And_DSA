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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            if (a == 2)
            {
                count++;
            }
        }
        // int target = count;
        if (count % 2 == 0 && count != 0)
        {

            int target = count/2;
            int internal_count = 0;
            int i = 0;
            // for (int i = 0; i < n; i++)
            // {
            //     if (internal_count != target)
            //     {
            //         if (count == 2)
            //     }
            // }
            while (internal_count != target)
            {
                if (arr[i] == 2)
                {
                    internal_count++;
                    if (internal_count == target)
                    {
                        cout << i + 1 << endl;
                        break;
                    }
                    else
                    {
                        i++;
                        continue;
                    }
                }
                else
                {
                    i++;
                    continue;
                }

            }
            // cout << i << endl;
            
        }
        else if (count == 0)
        {
            cout << 1 << endl;
        }
        else 
        {
            cout << -1 << endl;
        }
    }
}