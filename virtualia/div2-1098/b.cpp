#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        int a = x1, b = x2;
        x2 = max(a, b);
        x1 = min(a, b);
        int distone = abs(x2 - x1);
        int disttwo = abs(x2-x1-n);
        if (n == 3 || n == 2)
        {
            cout << 1 << endl;
            continue;
        }
        // else if (n == 4 && (x2-x1) == 2)
        // {
        //     cout << 2 << endl;
        //     continue;
        // }
        cout << min(distone, disttwo) + k << endl;

    }
}

// EDGE CASES!!!!
