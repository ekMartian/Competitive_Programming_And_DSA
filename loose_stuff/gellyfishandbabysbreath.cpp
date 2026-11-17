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
        vector <long long int> arrp;
        vector <long long int> arrq;
        vector <long long int> arrr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arrp.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arrq.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            long long int a  = INT_MIN;

            for (int j = 0; j < i; j++)
            {
                a = max(a, (long long int)(pow(2, arrp[j]) + pow(2, arrq[i-j])));
                // a = max(a, (pow(2, arrp[j]) + pow(2,arrq[i-j]) ) ));
            }
            cout << a % 998244353  << " ";
        }
        cout << endl;


    }
}