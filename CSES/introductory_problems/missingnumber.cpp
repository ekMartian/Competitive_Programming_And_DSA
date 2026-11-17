#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    vector <int> ref;
    for (int i = 0; i < n; i++)
    {
        ref.push_back(i+1);
    }
    for (int i = 0; i < n-1; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] != ref[i])
        {
            cout << ref[i] << endl;
            return 0;
            // break;
        }
        else
        {
            continue;
        }

    }
    cout << ref[n-1] << endl;
}