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
        int small = arr[0];
        int sum = small;
        for (int i = 1; i < n; i++)
        {
            int a = arr[i];
            int here = min(small, a);
            small = here;
            sum+=small;
        }
        cout << sum << endl;

    }
}