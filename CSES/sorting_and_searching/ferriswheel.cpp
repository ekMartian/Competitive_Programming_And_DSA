#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int a = 0;
    int b = n-1;
    int count = 0;
    while ( a < b)
    {
        if (arr[a] + arr[b] <= x)
        {
            count++;
            a++;

            b--;
        }
        else 
        {
            count++;
            b--;
        }
    }
    if (a == b)
    {
        count++;
    }
    cout << count << endl;

}