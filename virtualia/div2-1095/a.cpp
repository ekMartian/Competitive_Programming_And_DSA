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
        int is = true;
        int cost = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            if (a != 1)
            {
                cost+=a;
                is = false;
            }
        }
        if (is == true)
        {
            cout << 1 << endl;
        }
        else
        {
            if (arr[n-1] == 1)
            {
                cost++;
            }
            cout << cost << endl;
        }
    }
}