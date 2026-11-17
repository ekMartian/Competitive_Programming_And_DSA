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
            int a;
            cin >> a;
            arr.push_back(a);


        }
        sort(arr.begin(), arr.end());
        int distincts = 1;
        for (int i = 1; i < n; i++)
        {
            // int a = arr[i];
            if (arr[i] == arr[i-1])
            {
                continue;
            }
            else
            {
                distincts++;
            }
        }
        cout << distincts << endl;
    }
}
