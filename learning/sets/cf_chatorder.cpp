#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <string> order;
    // vector <string> toprint;
     set <string> chats;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        order.push_back(s);

    }
    reverse(order.begin(), order.end());
    for (int i = 0; i < n; i++)
    {
        string s = order[i];
        if (chats.find(s) == chats.end())
        {
            cout << s << endl;
            chats.insert(s);
        }
        else
        {
            continue;
        }


    }
   

    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin >> s;
    //     if (chats.find_if(s) != chats.end();)
    // }
}