#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // int nl;
        // cin >> n;
        long long int a, b;
        cin >> a >> b;
        int operations = 0;
        if (b == 1)
        {
            b++;
            operations++;
            while (a >= b)
            {
                a = a / b;
                operations+=2;
            }
            operations+=1;
        }
        else
        {
            while (a >= b)
            {
                a = a / b;
                operations++;
            }
            operations+=1;
        }
        cout << operations << endl;
    }
}
// {

// }