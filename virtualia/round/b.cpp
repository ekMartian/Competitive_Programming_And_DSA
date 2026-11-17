#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector <int> ints;
        for (int i = 0; i< 7; i++)
        {   
            int a
            ;cin >> a;
            ints.push_back(a);

        }
        sort(ints.rbegin(), ints.rend());
        for (int i = 1; i < 7; i++)
        {
            ints[i] = -1*ints[i];
        }
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            sum+=ints[i];
        }
        cout << sum << endl;

    }
}