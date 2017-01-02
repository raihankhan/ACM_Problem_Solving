#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,a,b,c,d;
    cin >> year;
    while(1)
    {
        year++;
        a=year%10;
        b=((year%100)/10);
        c=((year%1000)/100);
        d=year/1000;
        if(a!=b&&b!=c&&c!=d&&d!=a&&a!=c&&b!=d)
        {
            cout << year << endl;
            break;
        }
    }
    return 0;
}
