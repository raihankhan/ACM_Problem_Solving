  #include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long int arr[101];
    int t,i,j,k,n,d;
    long long int sum;
    cin >> t ;
    for(i=1;i<=t;i++)
    {
        cin >> n ;
        k=0; sum=0;
        for(j=1;j<=n;j++)
        {
            cin >> str ;
            if(str=="donate") { cin >> d; sum+=d;}
            if(str=="report") { arr[k++]=sum; }
        }
printf("Case %d:\n",i);
for(j=0;j<k;j++)
    printf("%lld\n",arr[j]);
    }
    return 0;
}
 