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
        set <int> elements;
        for (int i = 0; i < n; i++)
        {
            int a = arr[i];
            elements.insert(a);
        }

        bool is = false;
        vector <int> thatone;
        for (int i = 0; i < n; i++)
        {
            int a = arr[i] + k;
            thatone.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int a = thatone[i];
            if (elements.find(a) != elements.end())
            {
                is = true;
                break;
            }
        }
        if (is == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // int one = 0;
        // int two = n-1;
        // bool is = true;
        // while (one < two)
        // {
        //     int diff = arr[two] - arr[one];
        //     if (diff < k)
        //     {
        //         is = false;
        //         break;

        //     }
        //     else if (diff > k)
        //     {

        //     }
        // }
    }
}