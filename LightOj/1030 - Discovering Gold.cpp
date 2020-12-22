#include<bits/stdc++.h>
#define M   1000000007
#define lli long long int
#define pb push_back
using namespace std;
const int sz=1e5+7;
  void test(int T)
{
    int i,n,j;
    double sum=0.0;
    cin >> n;
    double dp[n+10]={0};
      for(i=0;i<n;i++) cin >> dp[i];
      for(i=n-2;i>=0;i--)
    {
        double tot=(i+6)<n?6:n-i-1;
        for(j=1;j<=tot;j++)
            dp[i]+=dp[i+j]/tot;
    }
      cout << setprecision(12) << fixed << "Case " << T << ": " << dp[0] << endl;
  }
void Test() {   int T;  scanf("%d",&T);   for(int cs=1;cs<=T;cs++)    test(cs); }
int main()
{
    Test();
    //test(1);
    return 0;
}
     