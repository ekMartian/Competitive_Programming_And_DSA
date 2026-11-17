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
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << 0 << " " << 1 << endl;
        }
        else if (n == 3)
        {
            cout << 2 << " " << 0 << " " << 1 << endl;
        }
        else 
        {
            cout << 3 << " " << 2 << " ";
            for (int i = 0; i < n; i++)
            {
                if (i != 2 && i != 3)
                {
                    cout << i << " ";
                }

            }
            cout << endl;
        }

    }
}