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
        vector <int> arr;
        int zeroposa, zeroposb;
        int count = 0;
        for (int i = 0; i < 2*n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            if (a == 0 && count == 0)
            {
                zeroposa = i;
                count++;
            }
            else if (a == 0 && count == 1)
            {
                zeroposb = i;
            }
        }
        int ans = 0;
        bool cond = true;
        int a = zeroposa;
        int b = zeroposb;
        vector <int> sofar;
        sofar.push_back(0);
        while (cond == true && a < 2*n && a >= 0 && b < 2*n && b >= 0)
        {
            if (arr[a] == arr[b])
            {
                sofar.push_back(arr[a]);
                a++;
                b--;
            }
            else if (arr[a] != arr[b])
            {
                if (a < b)
                {
                    ans = 1;
                    break;
                }
                else if (a > b)
                {
                    break;
                }
            }
        }
        if (ans == 0)
        {   
            sort(sofar.begin(), sofar.end());
            int at = 0;
            for (int i = 0; i < sofar.size(); i++)
            {
                if (sofar[i] == at)
                {
                    at++;
                }
                else if (sofar[i] < at)
                {
                    continue;
                }
            }
            ans = at;
        }
        vector <int> sofara;
        vector <int> sofarb;
        int ansa = 0;
        int ansb = 0;
        sofara.push_back(0);
        sofarb.push_back(0);
        int aa = zeroposa-1;
        int ab = zeroposa+1;
        int ba = zeroposb-1;
        int bb = zeroposb+1;
        while (aa >= 0 && ab < 2*n)
        {
            if (arr[aa] == arr[ab])
            {
                sofara.push_back(arr[aa]);
                aa--;
                ab++;
            }
            else
            {
                break;
            }
            
        }
        while (ba >= 0 && bb < 2*n)
        {
            if (arr[ba] == arr[bb])
            {
                sofarb.push_back(arr[ba]);
                ba--;
                bb++;
            }
            else
            {
                break;
            }
            
        }
        sort(sofara.begin(), sofara.end());
        int at = 0;
        for (int i = 0; i < sofara.size(); i++)
        {
            if (sofara[i] == at)
            {
                at++;
            }
            else if (sofara[i] < at)
            {
                continue;
            }
        }
        ansa = at;
        sort(sofarb.begin(), sofarb.end());
        at = 0;
        for (int i = 0; i < sofarb.size(); i++)
        {
            if (sofarb[i] == at)
            {
                at++;
            }
            else if (sofarb[i] < at)
            {
                continue;
            }
        }
        ansb = at;
        int stageone = max(ans, ansa);
        cout << max(stageone, ansb) << endl;
    }
}

// check once, read properly once and check once GOD
