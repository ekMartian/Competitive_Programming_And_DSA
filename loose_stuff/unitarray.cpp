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
        int positive = 0;
        int negative = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            numbers.push_back(a);
            if (a > 0)
            {
                positive++;
            }
            else 
            {
                negative++;
            }

        }
        // cout << negative << " " << positive;
        if (negative % 2 == 0 && positive >= negative)
        {
            cout << 0 << endl;
        }
        else if (negative % 2 == 0 && negative > positive)
        {
            int counter = 0;
            while (negative > positive)
            {
                negative-=2;
                positive+=2;
                counter+=2;
            }
            cout << counter << endl;
        }
        else if (negative % 2 == 1 && positive >= negative)
        {
            cout << 1 << endl;
        }
        else if (negative % 2 == 1 && negative > positive)
        {
            int counter = 1;
            negative-=1;
            positive+=1;
            while (negative > positive)
            {
                negative-=2;
                positive+=2;
                counter+=2;
            }
            cout << counter << endl;
        }
    }
}