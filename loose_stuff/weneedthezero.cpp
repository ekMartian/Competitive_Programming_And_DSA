#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (gcd(arr[i], arr[j]) == 1 || gcd(arr[i], arr[j]) == 2)
                {
                    flag = true;
                    break;
                }
            }
        }
        // vector <int> gcds;
        // int a = arr[0];
        // gcds.push_back(arr[0]);
        // for (int i = 1; i < n; i++)
        // {
        //     gcds.push_back(gcd(arr[i], gcds[i-1]));
        // }
        
        // bool flag = true;
        // for (int i = 1; i < n ; i++)
        // {
        //     if (gcds[i] <= i+1)
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         flag = false;
        //         break;
        //     }

        // }
        if (flag == true)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }

    }
}