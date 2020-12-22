#include<bits/stdc++.h>
#define M   1000000007
#define lli long long int
#define pb push_back
using namespace std;
const int sz=1e5+7;
  void test(int T)
{
    int n,i;
    scanf("%d",&n);
    vector<int> v(n);
    for(i=0;i<n;i++) scanf("%d",&v[i]);
      int l=1,r=M-7,k,mid,ans=r+1;
      while(l<r)
    {
        mid=(l+r)/2;
        bool isPossible=1;
        int now=0;
        k=mid;
        //cout << k << endl;
        for(i=0;i<n;i++)
        {
            //cout <<  now << " " << v[i] << " " << k << endl;
            if(v[i]-now==k) k--;
            else if(v[i]-now>k)
            {
                isPossible=0;
                //cout << "ok " << now << " " << v[i] << " " << k << endl;
                break;
            }
            now=v[i];
        }
        if(isPossible)
            r=mid,ans=mid;
        else l=mid+1;
    }
      printf("Case %d: %d\n",T,ans);
  }
void Test() {   int T;  scanf("%d",&T);   for(int cs=1;cs<=T;cs++)    test(cs); }
int main()
{
    Test();
    //test(1);
    return 0;
}
     