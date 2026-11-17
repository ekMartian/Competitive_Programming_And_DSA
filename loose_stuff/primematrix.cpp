#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
vector <bool> is_prime(MAXN, true);

void precompute()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++)
    {
        for (int j = i * i; j < MAXN; j+=i)
        {
            is_prime[j] = false;

        }
    }
    // for (int i)
}
int main()
{
    precompute();
    int n, m; 
    cin >> n >> m;
    vector <vector <int> > matrix;
    vector <vector <int> > adding;
    vector <int> sums;
    for (int i = 0; i < n; i++)
    {
        vector <int> rowvec;
        vector <int> otherrowvec;
        for (int j = 0; j < m; j++)
        {
            int count = 0;
            int a;
            cin >> a;
            rowvec.push_back(a);
            while (is_prime[a] != true)
            {
                a++;
                count++;
                
            }
            otherrowvec.push_back(count);
            
        }
        matrix.push_back(rowvec);
        adding.push_back(otherrowvec);

    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum+=adding[i][j];
        }
        sums.push_back(sum);
    }
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=adding[i][j];
        }
        sums.push_back(sum);
    }

    sort(sums.begin(), sums.end());
    cout << sums[0] << endl;
    
    // vector <int> rowvec;





}
// sieve of eratosthenes
