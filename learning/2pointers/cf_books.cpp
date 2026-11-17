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
    int books = 0;
    int l = 0;
    int h = n-1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    // vector <int> pref;
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum+=arr[i];
    //     pref.push_back(sum);
    // }
    while (sum > t)
    {
        if (arr[l] > arr[h])
        {
            sum-=arr[l];
            l++;
        }
        else
        {
            sum-=arr[h];
            h--;
        }
    }
    cout << h - l + 1 << endl;
}
