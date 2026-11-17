#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;
        
        vector <pair<int, int>> k;
        vector <pair<int, int>> q;
        int n, m;
        if (a != b)
        {
            k.push_back({xk+a, yk+b});
            k.push_back({xk-a, yk-b});
            k.push_back({xk+a, yk-b});
            k.push_back({xk-a, yk+b});
            k.push_back({xk+b, yk+a});
            k.push_back({xk-b, yk-a});
            k.push_back({xk+b, yk-a});
            k.push_back({xk-b, yk+a});
            n = 8;
            // for (int i = 0; i < 9; i++)
            // {

            // }
            
            q.push_back({xq+a, yq+b});
            q.push_back({xq-a, yq-b});
            q.push_back({xq+a, yq-b});
            q.push_back({xq-a, yq+b});
            q.push_back({xq+b, yq+a});
            q.push_back({xq-b, yq-a});
            q.push_back({xq+b, yq-a});
            q.push_back({xq-b, yq+a});
            m = 8;

        }
        else
        {
            k.push_back({xk+a, yk+b});
            k.push_back({xk-a, yk-b});
            k.push_back({xk+a, yk-b});
            k.push_back({xk-a, yk+b});
            n = 4;
            // k.push_back({xk+b, yk+a});
            // k.push_back({xk-b, yk-a});
            // k.push_back({xk+b, yk-a});
            // k.push_back({xk-b, yk+a});
            // for (int i = 0; i < 9; i++)
            // {

            // }
            
            q.push_back({xq+a, yq+b});
            q.push_back({xq-a, yq-b});
            q.push_back({xq+a, yq-b});
            q.push_back({xq-a, yq+b});
            m = 4;
            // q.push_back({xq+b, yq+a};
            // q.push_back({xq-b, yq-a});
            // q.push_back({xq+b, yq-a});
            // q.push_back({xq-b, yq+a});
        }
        

        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (k[i] == q[j])
                {
                    counter++;
                }
            }
        }
        cout << counter << endl;



    }
}
//     [

//     ]
// }
// constants in loop are okay (usually or always?)

