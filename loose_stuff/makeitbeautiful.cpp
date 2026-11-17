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
        sort(numbers.begin(), numbers.end());
        reverse(numbers.begin(), numbers.end());
        if (numbers[0] == numbers[n-1])
        {
            cout << "NO" << endl;
        }
        else if (numbers[0] == numbers[1])
        {
            cout << "YES" << endl;
            cout << numbers[0] << " " << numbers[n-1] << " ";
            for (int i = 1; i < n-1; i++)
            {
                cout << numbers[i] << " ";
            }
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << numbers[i] << " ";
            }

        }
        cout << endl;
    }
}