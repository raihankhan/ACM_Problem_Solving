#include<bits/stdc++.h>
#define lli long long int
#define veci vector<int>
#define vecl vector<long long int>
#define pb push_back

using namespace std;

int main()
{
    int n,i,size;
    cin >> n ;
    if(n%4==0)
    {
        cout << "0" << endl <<  n/2 ;

        for(i=1;i<=n;i++)
        {
            if(i%4==1 or i%4==0) cout << " " << i ;
        }
        cout << endl;
        return 0;
    }
    else if(n%4==1)
    {
        cout << "1" << endl << (n+1)/2 ;

        for(i=1;i<=(n/4)+1;i++)
        {
            cout << " " << i ;
        }
        for(i=0;i<(n/4);i++)
        {
            cout << " " << n-i ;
        }
        cout << endl;
        return 0;
    }
    else if(n%4==2)
    {
        cout << "1" << endl << n/2 ;

        for(i=1;i<=n/2;i+=2)
        {
            cout << " " << i ;
        }
        for(i=1;i<n/2;i+=2)
        {
            cout << " " << n-i+1 ;
        }
        cout << endl;
        return 0;
    }
    else if(n%4==3)
    {
        cout << "0" << endl << n/2 ;

        for(i=1;i<=(n/4);i++)
        {
            cout << " " << i ;
        }
        for(i=0;i<(n/4)+1;i++)
        {
            cout << " " << n-i ;
        }
        cout << endl;
        return 0;
    }
}




