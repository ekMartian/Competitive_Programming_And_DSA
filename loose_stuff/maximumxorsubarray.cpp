#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        // int maximum = 0;
        int current = 0;
        int end = arr[i];
        for (int j = i; j >= 0; j--)
        {
            current = current ^ arr[j];

            maximum = max(maximum, current);

        }
    }
    cout << maximum << endl;
}