#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,n,m,mid;
    cin >> n >> m ;
    int c=1,d=3;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2==0)
                cout << "#";
            else if (j==m-1)
            {
                if(i==c)
                {
                    cout << "#" ;
                    c+=4;
                }
                else cout << ".";
            }
            else if(j==0)
            {
                if(i==d)
                {
                    cout << "#";
                    d+=4;
                }
                else cout << ".";
            }
            else
                cout << "." ;
        }
        cout << endl ;
    }
    return 0;
}
