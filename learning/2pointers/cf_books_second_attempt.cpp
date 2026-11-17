#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int start = 0;
    int end = 0;
    int count = 0;
    int maximum = 0;
    vector <int> pref;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        pref.push_back(sum);
    }
    while (start < n && end < n)
    {
        count = end - start + 1;
        int s = 0;
        if (start == end)
        {
            s = arr[start];
        } 
        else
        {
            s = pref[end] - pref[start] + arr[start];
        }
        if (s <= t)
        {
            maximum = max(maximum, count);
            if (end == n-1)
            {
                break;
            }
            end++;

        }
        else
        {
            start++;
        }
        
    }
    cout << maximum << endl;

}