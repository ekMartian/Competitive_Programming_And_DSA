#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int req;
        if (k % n == 0)
        {
            req = k / n;
        }
        else
        {
            req = k / n + 1;
        }
        int slots = m - req;
        int req_two;
        int to_split_into = slots + 1;
        if (req % to_split_into == 0)
        {
            cout << req / to_split_into << endl;
        }
        else
        {
            cout << req / to_split_into + 1 << endl;
        }
    }
}