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
        int maximum = 1;
        int current = 1;
        for (int i= 1; i < n; i++)
        {
            if (arr[i] == arr[i-1])
            {
                current++;

            }
            else
            {
                current = 1;
            }
            maximum = max(maximum, current);
        }
        int remaining = n - maximum;
        int steps = 0;
        int toadd;
        if (remaining % maximum == 0)
        {
            toadd = remaining/maximum;
        }
        else
        {
            toadd = remaining/maximum + 1;
        }
        steps+=toadd;
        steps+=remaining;
        cout << steps << endl;
    }
    


}
