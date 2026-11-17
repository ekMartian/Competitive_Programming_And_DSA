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
        vector <int> qs;
        for (int i = 0; i < n; i++)
        {
            int a = arr[i];
            int b = a + a % 3;
            int c = a+b;
            if (gcd(b, a) == 3)
            {
                cout << b-a << endl;
            }
            cout << a << " ";
        }
        cout << endl;
    }
}