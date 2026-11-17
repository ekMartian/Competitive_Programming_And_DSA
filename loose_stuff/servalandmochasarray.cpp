#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
    
    int n;
    bool flag = false;
    cin >> n;
    // vector <int> numbers;
    vector <int> prods;
    prods.push_back(1);
    // int a;
    // cin >> a;
    // numbers.push_back(a);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        // numbers.push_back(a);
        prods.push_back(prods[i-1] * a);

    }
    int target = prods[n];
    for(int i = 0; i < n; i++)
    {
        if (prods[i] == target/2)
        {
            cout << i << endl;
            flag = true;
            return 0;
            break;
        }
    }
    if (flag == false)
    {
        cout << -1 << endl;
        return 0;
    }
}

}


1e8 stuf, check it out, spac optmixt is required byoned this, it gives mach_port_tor templateor somehitng
bust mostly M_LOG2Emle


mach_port_t
mle  
tle eliminators se dp lele 

woh course. 

