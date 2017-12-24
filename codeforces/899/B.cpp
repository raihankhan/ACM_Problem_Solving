#include<bits/stdc++.h>
#define lli long long int
#define veci vector<int>
#define vecl vector<long long int>
#define pb push_back

using namespace std;

int main()
{
    int arr[80]={0,
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,29,31,30,31,30,31,31,30,31,30,31,
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,28,31,30,31,30,31,31,30,31,30,31
    };
    int t,i,j,month[26],cnt,fnl=0;
    month[0]=0;
    cin >> t ;
    for(i=1;i<=t;i++)
        cin >> month[i] ;
    for(i=0;i<=72-t;i++)
    {
        cnt=0;
        for(j=1;j<=t;j++)
        {
            if(arr[i+j]==month[j]) {  cnt++; }
            else break;
        }
        if(cnt==t) {fnl=1; break;}
    }
    if(fnl==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}


