#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int w, h;
        cin >> w >> h;
        int k;
        // cin >> k;
        long long int one;
        long long int two;
        long long int three;
        long long int four;

        cin >> k;
        for (int i = 0; i < k; i++)
        {
            long long int x;
            cin >> x;
            if (i == 0)
            {
                one = x;
            }
            else if (i == k-1)
            {
                one = x - one;
            }

        }
        one = h*one;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            long long int x;
            cin >> x;
            if (i == 0)
            {
                two = x;
            }
            else if (i == k-1)
            {
                two = x - two;
            }

        }
        two = h*two;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            long long int y;
            cin >> y;
            if (i == 0)
            {
                three = y;
            }
            else if (i == k-1)
            {
                three = y - three;
            }

        }
        three = w*three;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            long long int y;
            cin >> y;
            if (i == 0)
            {
                four = y;
            }
            else if (i == k-1)
            {
                four = y - four;
            }

        }
        four = w*four;
        long long int maxone = max(one, two);
        long long int maxtwo = max(three, four);
        cout << max(maxone, maxtwo) << endl;


    }
}