#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        bool yes = false;
        bool trigger = false;
        vector <int> arr;
        for (int i = 0; i < k; i++)
        {
            int a;
            cin >> a;
            if (a >= 3)
            {
                yes = true;
            }
            else if (a == 2 && trigger == true)
            {
                yes = true;
            }
            if (a == 2)
            {
                trigger = true;
            }
            arr.push_back(a);
        }
        if (yes == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


    }
}