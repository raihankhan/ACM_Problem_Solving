#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    int arr[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> a >> b ;
    n=arr[a];
    if(n==28)
    {
        if(b==1)
            cout << "4" << endl;
        else cout << "5" << endl;
    }
    else if(n==31)
    {
        if(b>5)
            cout << "6" << endl;
        else cout << "5" << endl;
    }
    else if(n==30)
    {
         if(b>6)
            cout << "6" << endl;
        else cout << "5" << endl;
    }
    return 0;
}
