#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int>s;
    int q,v,cmd;
    cin >> q;
    while(q--)
    {
        cin >> cmd;
        if(cmd==1)
        {
            cin >> v;
            s.insert(v);
        }
        else if(cmd==2)
        {
            cin >> v;
            s.erase(v);
        }
        else
        {
            for(auto it:s)
            {
                cout << it << endl;
                break;
            }
        }
    }  

    return 0;
}
