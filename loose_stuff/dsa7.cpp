#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        arr.push_back(a);

    }
    int i = 0;
    while (i < n && k > 0)
    {
        int subtracting = 0;
        if (arr[i-1] != 0)
        {
            k--;
            arr[i] = arr[i] - arr[i-1];
            subtracting = subtracting + arr[i];
        }
        else if (arr[n-1]==0)
        {
            cout << 0 << endl;
        }
        
    }
    for (int i = 0; i< k; i++)
    {

    }
}