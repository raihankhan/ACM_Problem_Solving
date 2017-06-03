#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k=0,loc, m[3000] ;
    long long int arr[3000],mini;
    cin >> n ;
    for(i=0;i<n;i++)
    scanf("%I64d",&arr[i]);
    int sw=0;
    for(i=0;i<n-1;i++)
    {
        mini=arr[i] ;
        loc=i ;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<mini)
            {
                mini=arr[j];
                loc=j;
            }
        }
        if(loc!=i)
            {
                swap(arr[i],arr[loc]) ;
                m[k++]=i; m[k++]=loc ;
                sw++;
            }
    }
    printf("%d\n",sw);
    for(i=0;i<2*sw;i+=2)
        printf("%d %d\n",m[i],m[i+1]);

    return 0 ;
}