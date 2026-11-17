#include <bits/stdc++.h>
using namespace std;

int main()
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
    long long int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - arr[i-1];

        if (diff < 0)
        {
            ans+=(-1*diff);
            arr[i]+=(-1*diff);
        }

    }
    cout << ans << endl;
}