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
        long long int sum = 0;
        int xorsum = 0;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            sum+=a;
            xorsum^=a;
            arr.push_back(a);
        }
        cout << 2 << endl;
        cout << xorsum << " ";
        sum+=xorsum;
        xorsum^=xorsum;
        // cout << xorsum << " ";
        xorsum^=sum;
        cout << sum << endl;
        sum+=sum;
        // cout << sum << endl;



    }
    // whiole (xz)
}