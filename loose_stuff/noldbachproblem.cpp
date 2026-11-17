#include <bits/stdc++.h>
using namespace std;


int main()
{
    const int MAXN = 1000;
    vector <bool> is_prime(MAXN, true);
    // {

    // }
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++)
    {
        for (int j = i * i; j < MAXN; j+=i)
        {
            is_prime[j] = false;
        }

    }
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector <int> primes_till_n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (is_prime[i] == true)
        {
            primes_till_n.push_back(i);
            count++;
        }
    }
    int ans = 0;
    for (int i = 0; i < count; i++)
    {
        bool flag = false;
        int a = primes_till_n[i] - 1;
        for (int j = 0; j < i; j++)
        {
            if (primes_till_n[j] + primes_till_n[j+1] == a)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            ans++;
        }

    }
    if (ans >= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}

//always check absic things in the code, msitakes can be made in simpler parts
// loop incremetns,, all eveyrhting deailts, and simple details, yst cheecked. 
