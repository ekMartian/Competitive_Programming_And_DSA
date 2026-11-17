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
        long long int product = 1;
        for (int i = 0; i < n; i++)
        {
            product*=arr[i];

        }
        double final = pow(double(product), double(1.0/n));
        if (final == floor(final))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout <<"NO" << endl;
        }
    }
}