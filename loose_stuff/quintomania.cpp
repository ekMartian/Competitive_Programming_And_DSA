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
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i-1]) != 5 && abs(arr[i] - arr[i-1]) != 7)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
}