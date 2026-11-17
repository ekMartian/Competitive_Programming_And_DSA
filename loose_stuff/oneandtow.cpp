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
        for (int i = 0; i < n; i++)
        {
        
            int a;
            cin >> a;
            arr.push_back(a);

        }
        vector <int> productennfronter;
        vector <int> productennbacker;
        int a = 1;
        productennfronter.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {

            productennfronter.push_back(arr[i] * productennfronter[i-1]);

        }
        int total = productennfronter[n-1];
        for (int i = 0; i < n-1; i++)
        {
            productennbacker.push_back(total / productennfronter[i]);
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (productennfronter[i] == productennbacker[i])
            {
                cout << i+1 << endl;
                flag = true;
                break;
            }
            else
            {
                continue;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
        // for (int i)
        // reverse(arr.begin(), arr.end());
        // productennbacker.push_back(arr[0]);
        // for (int i = 1; i < n; i++)
        // {
        //     productennbacker.push_back(arr[i] * productennbacker[i-1]);
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     int fromfront = productennfronter[i];
        //     int fromback = productennbacker[n-2-i];
        // }
    }

}