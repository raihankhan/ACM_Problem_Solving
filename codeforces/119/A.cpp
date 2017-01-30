#include<bits/stdc++.h>
using namespace std ;
int gcd(int x,int y);
int main()
{
    int a ,b, n,x;
    cin >> a >> b >> n ;
    x=n;
    while(1)
    {
       if(x==0)
        { cout << "1" << endl;  break; }
       else
       {
           x=x-gcd(x,a);
       }
       if(x==0)
        { cout << "0" << endl;  break; }
       else
       {
           x=x-gcd(x,b);
       }

    }
    return 0;
}
int gcd(int x,int y)
{
    int temp;
    while(y)
    {
        temp= x%y;
        x=y;
        y=temp;
    }
    return x;
}

