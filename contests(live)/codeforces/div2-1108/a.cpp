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
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(i+1);
        }
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n-1; i++)
            {
                arr[i] = arr[i-1];
                arr[i-1] = i+1;

            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}