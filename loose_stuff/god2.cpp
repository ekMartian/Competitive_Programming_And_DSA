#include <bits/stdc++.h>
using namespace std;

int countDigits(long long n)
{
    if (n==0) return 1;
    return floor(log10(abs(n))) + 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;  cin >> n;
        int digits = countDigits(n);
        int answer = 0;
        answer = answer + (digits-1)*9;
    // answer = digits;
        int divisor = pow(10, digits-1);
        answer+= (n/divisor);
        cout << answer << endl;
        
    }
}
    