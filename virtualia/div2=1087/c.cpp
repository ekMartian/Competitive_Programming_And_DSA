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
        sort(arr.begin(), arr.end());
        int sum = 1;
        bool is = true;
        if (arr[0] != 1)
        {
            is = false;
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            int a = arr[i];
            if (a <= sum)
            {
                sum+=a;
                continue;
            }
            else
            {
                is = false;
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

    }
}