#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        for (int i = n-2; i >=0; i--)
        {
            long long int a = arr[i];
            long long int b = arr[i+1];
            if (b > 0)
            {
                arr[i] = arr[i] + b;
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            long long int a = arr[i];
            if (a > 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}