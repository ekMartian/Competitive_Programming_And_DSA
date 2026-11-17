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
        for (int i = 0; i < n; i++)
        {
            cout << n + 1 - numbers[i] << " ";
        }
        cout << endl;
    }
}