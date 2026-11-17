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
        // int a;
        // cin >> a;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        int b = arr[0];
        for (int i = 1; i < n; i++)
        {
            int c;
            c = arr[i];
            if (c > b)
            {
                continue;
        
            }
            else
            {
                flag = false;
                break;
            }
        }
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