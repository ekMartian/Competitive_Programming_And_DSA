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
        int prod;
        // xor  = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i == 0)
            {
                prod = a;
            }
            else
            {
                prod = prod ^ a;
            }


        }
        if (prod == 0)
        {
            cout << 0 << endl;

        }
    
        else
        {
            if (n % 2 == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << prod << endl;
            }
        }
    }
}