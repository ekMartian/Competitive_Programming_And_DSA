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
        vector <long long int> arr;
        long long int negs = 0;
        long long int sum = 0;
        long long int lowest = INT_MAX;
        bool zero = false;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
            sum+=(abs(a));
            lowest = min(lowest, abs(a));
            if (a < 0)
            {
                negs++;
            }
            if (a == 0)
            {
                zero = true;
            }

        }
        if ((negs&1) == 0 || zero == true)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2*lowest << endl;
        }

    }
}