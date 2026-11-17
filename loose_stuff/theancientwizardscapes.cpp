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
        vector <int> right;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        bool flag = true;
        int prev = arr[0];
        right.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            int a = arr[i];
            if (a > )
            if (abs(prev - a) > 1)
            {
                cout << "no" << endl;
                flag = false;
                break;
            }
            else
            {
                right.push_back(arr[i]);
            }
            // prev = a;


        }
    }
}