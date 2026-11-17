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
        vector <int> numbers;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            numbers.push_back(a);
        }
        vector <int> fromfront;
        vector <int> fromback;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                fromfront.push_back(1*numbers[i]);
            }
            else
            {
                fromfront.push_back(fromfront[i-1]* numbers[i]);
            }
        }
        reverse(numbers.begin(), numbers.end());
        for (int i = 1; i < n; i++)
        {
            if (i == 0)
            {
                fromback.push_back(1*numbers[i]);
            }
            else
            {
                fromback.push_back(fromfront[i-1]* numbers[i]);
            }
        }
        reverse(fromback.begin(), fromback.end());
        for (int i = 0; i < n; i++)
        {
            if (fromfront[i] == fromback[i])
            {
                cout << i << endl;
                flag = true;
            }
            else
            {
                continue;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }
}