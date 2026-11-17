#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int diff = abs(a-b);
        if (diff == 0)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            long long int aretainer = a;
            long long int bretainer = b;
            cout << abs(a-b) << " ";
            long long int counterone = 0;
            long long int countertwo = 0;
            long long int i = 0;
            long long int k = min(a, b);
            while (i < min(a, b))
            {
                i+=diff;
            }
            long long int j = i - diff;
            cout << min(abs(k-i),(k - j)) << endl;
        //     while (gcd(a, b) != diff)
        //     {
        //         counterone++;
        //         a++;
        //         b++;


        //     }
        //     a = aretainer;
        //     b = bretainer;
        //     while (gcd(a, b) != diff)
        //     {
        //         if (a > 0 && b > 0)
        //         {
        //             countertwo++;
        //             a--;
        //             b--;
        //         }
        //         else
        //         {
        //             countertwo = INT_MAX;
        //         }
            
        //     }
        //     cout << min(counterone, countertwo) << endl;
        }

    }
}
//risken tleer;