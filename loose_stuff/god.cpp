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
        vector <int> god;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            god.push_back(a);
        }
        for (int i = 1; i < n; i++)
        {
            if (god[i]%2 == god[i-1]%2)
            {
                count++;
            }
        }
        cout << count << endl;

    }
}