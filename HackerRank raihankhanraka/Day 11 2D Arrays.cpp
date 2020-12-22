#include<bits/stdc++.h>
using namespace std;

map<string,string>mm;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q;
    int i,j,k;

    cin >> n ;
    string name,num;
    while(n--)
    {
        cin >> name >> num ;
        mm[name]=num;
    }

    while(cin >> name)
    {
        if(mm.find(name)!=mm.end())
        {
            cout << name << "=" << mm[name] << endl;
        }
        else cout << "Not found" << endl;
    }

    return 0;
}
