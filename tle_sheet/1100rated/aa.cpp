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
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 2 << " " << 2 << endl;
        }
        else if (n >= 3)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
        // {
        //     cout << 2 << endl;
        // }
        // else
        // {
        //     cout << 2 << endl;
        // }

    }
}