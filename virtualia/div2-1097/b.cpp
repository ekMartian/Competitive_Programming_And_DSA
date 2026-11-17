#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector <long long int> arr;
        bool zerofactor = true;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(a);
            if (a != 0)
            {
                zerofactor = false;
            }
        }
        if (zerofactor == true)
        {
            cout << n << endl;
            continue;
        }
        sort(arr.begin(), arr.end());
        long long int maximum = arr[n-1];
        vector <long long int> uniques;
        set <long long int> done;
        for (int i = 0; i < n-1; i++)
        {
            long long int a = arr[i];
            if (done.find(a) == done.end())
            {
                uniques.push_back(a);
                done.insert(a);
            }
            else
            {
                continue;
            }

        }
        long long int at = 0;
        long long int sum = 0;
        for (int i = 0; i < uniques.size(); i++)
        {
            long long int a = uniques[i];
            if (a == at)
            {
                at++;
            }
            if (maximum == at)
            {
                at++;
            }
            sum+=at;
        }
        sum = sum + (n-1-uniques.size())*at;
        sum = sum + n*maximum;
        cout << sum << endl;
    }
}