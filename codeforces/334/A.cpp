#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m;
    cin >> n ;
    m=n*n;
    for(i=0;i<m/2;i++)
    {
        printf("%d %d",i+1,m-i);
        if((2*(i+1))%n==0)
            printf("\n");
        else printf(" ");
    }
    return 0;
}
