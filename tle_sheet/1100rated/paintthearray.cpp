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
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);

        }
        int hcf = arr[0];
        int j = 0;
        while (hcf != 1 && j < n)
        {
            hcf = gcd(hcf, arr[j]);
            j+=2;
        }
        bool is = true;
        int k = 1;
        while (k < n)
        {
            if (arr[k] % hcf == 0)
            {
                is = false;
                break;
            }
            else
            {
                k+=2;
            }
        }
        if (is == true && hcf > 1)
        {
            cout << hcf << endl;
            continue;
        }
        j = 1;
        k = 0;
        hcf = arr[1];
        while (hcf != 1 && j < n)
        {
            hcf = gcd(hcf, arr[j]);
            j+=2;
        }
        bool isis = true;
        while (k < n)
        {
            if (arr[k] % hcf == 0)
            {
                isis = false;
                break;
            }
            else
            {
                k+=2;
            }
        }
        if (isis == true && hcf > 1)
        {
            cout << hcf << endl;
            continue;
        }
        cout << 0 << endl;

    }
}