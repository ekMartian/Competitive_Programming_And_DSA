#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        int n, q;
        cin >> n >> q;
        
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        vector <int> sums;
        sums.push_back(arr[0]);
        for (int i = 1; i < n; i++)
        {
            sums.push_back(sums[i-1] + arr[i]);

        }
        
        for (int i = 0; i < q; i++)
        {
            int sum = 0;
            int l, r, k;
            cin >> l >> r >> k;
            
            if (l == 1)
            {
                sum = sum + sums[n-1] - sums[r-1];
                sum = sum + k * (r - l + 1);
                
            }
            else 
            {
                sum = sums[l-2];
                sum = sum + sums[n-1] - sums[r-1];
                sum = sum + k * (r - l + 1);
                
            }
            
            if (sum % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        
    }
}
// for anotehre quesiton
/*#include <iostream>
#include <cmath>

int main() {
    int base = 2;
    int exponent = 3;
    // Add a small value (1e-9) for precision before casting to int
    int result = static_cast<int>(std::pow(static_cast<double>(base), static_cast<double>(exponent)) + 1e-9);

    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;
    return 0;
}
*/