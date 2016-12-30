#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string rgb;
    int len,i,change=0;;
    cin >> len;
    cin >> rgb ;
    getchar();
    for(i=1;i<len;i++)
    {
        if(rgb[i]==rgb[i-1])
            ++change;
    }
     cout << change << endl;
    return 0;
}
