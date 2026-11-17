#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a = 1;
        long long int b = 1;
        long long int sum = 0;
        bool doing  = true;
        while (a != n || b != n)
        {
            long long int prod = a * b;
            sum+=prod;
            if (doing == true)
            {
                a++;
                doing = false;
            }
            else
            {
                b++;
                doing = true;
            }

        }
        sum+=(a*b);
        cout << (2022*sum % (1000000007)) << endl;

    }
}