#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        {
            int n;
            cin >> n;
            if (n == 2)
            {
                cout << -1 << endl;
                continue;

            }
            long long int a = 2;
            cout << a << " ";
            a = 4;
            n--;
            long long int sum = 6;
            while (n > 0)
            {
                cout << a << " ";
                a = sum;
                sum+=sum;
                n--;
            }
            cout << endl;
        }
    }
}