#include <bits/stdc++.h>
using namespace std;

const long long int MAXN = 1000005;
vector <bool> is_prime(MAXN, true);

void precompute()
{
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i < MAXN; i++)
    {
        for (int j = i * i; j < MAXN; j+=i)
        {
            is_prime[j] = false;

        }
    }
}

int main()
{
    precompute();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        long long int b = sqrt(a);
        if (is_prime[b] == true && b*b == a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;  
        }
    }
    
}

//10 power 12 cant be stored, something to do with square roots so: 
// as in, something to do with square roots therefore?
