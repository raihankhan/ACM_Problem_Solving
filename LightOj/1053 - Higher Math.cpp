#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t ;
    for(i=1;i<=t;i++)
    {
        vector< long long int > vec(3) ;
        cin >> vec[0] >> vec[1] >> vec[2] ;
        sort(vec.begin(),vec.begin()+3) ;
        if(vec[0]*vec[0] + vec[1]*vec[1] == vec[2]*vec[2])
            cout << "Case " << i << ": yes" << endl;
        else cout << "Case " << i << ": no" << endl;
    }
    return 0;
}
 