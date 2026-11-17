#include <bits/stdc++.h>
using namespace std;

bool is_fair(long long int x)
{
    bool ans = true;
    long long int xretainer = x;
    vector <long long int> digits;
    long long int count = 0;
    while (x != 0)
    {
        long long int a = x % 10;
        digits.push_back(a);
        x = x / 10;
        count++;

    }
    for (int i = 0; i < count; i++)
    {
        if (digits[i] == 0)
        {
            continue;
        }
        if (xretainer % digits[i] != 0)
        {
            ans = false;
            break;
        }
    }
    return ans;
}
int main()
{
    int t;  
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int x = n;
        while (is_fair(x) != true)
        {
            x++;
        }
        cout << x << endl;
    }
}