#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
        }
        // int time = 0;
        long long int time = b;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] + 1 <= a)
            {
                time+=arr[i];
            }
            else
            {
                time+=(a-1);
            }
        }
        cout << time << endl;

        // int n;
        // cin >> n;
        // while

    }
}