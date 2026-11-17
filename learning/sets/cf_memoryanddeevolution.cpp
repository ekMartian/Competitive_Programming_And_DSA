#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int s, e;
    cin >> s >> e;
    bool flag = true;
    a = b = c = s;
    int counter = 0;
    a = e;
    counter++;
    while (a != e || b != e || c != e)
    {
        int aretainer = a;
        int bretainer = b;
        int cretainer = c;
        // a = e;
       
        c = max(bretainer, cretainer);
        b = min(bretainer, cretainer);
        aretainer = a;
        bretainer = b;
        cretainer = c;
        if (flag == true)
        {
            b = e;
            if (a + b <= c)
            {
                b = bretainer;
                b = c - a + 1;
                // bretainer = b;
                counter++;
                // c = b - a + 1;
                // // cretainer = c;
                // counter++;


            }
            else
            {
                b = e;
                c = e;
                counter+=2;
                break;
            }
            flag = false;

        }
        else if (flag == false)
        {
            c = e;
            if (a + c <= b)
            {
                c = cretainer;
                c = b - a + 1;
                // bretainer = b;
                counter++;
                // c = b - a + 1;
                // // cretainer = c;
                // counter++;


            }
            else
            {
                b = e;
                c = e;
                counter+=2;
                break;
            }
            flag = true;

        }
        

    
        
    }
    cout << counter << endl;
}
// 22 22 22
// 22 22 4
// 22 19 4
// 16 19 4
// 16 13 4
// 10 13 4
// 10 7 4
// 4 7 4
// 4 4 4