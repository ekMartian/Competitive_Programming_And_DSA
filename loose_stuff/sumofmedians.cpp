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
        int k;
        cin >> k;
        vector <long long int> numbers;
        for (int i = 0; i < n * k; i++)
        {
            long long int a;
            cin >> a;
            numbers.push_back(a);
        }
        long long int sum = 0; 
        if (n%2 == 0)
        {
            for (int i = (k*(n/2-1)); i < n * k; i = i + 1 + (n/2))
            {
                sum+=numbers[i];
            }

        }
        else
        {
            for (int i = k*(n-1)/2; i < n * k; i+=((n-1)/2 + 1))
            {
                sum+=numbers[i];

            }
        }
        cout << sum << endl; 
    }
}