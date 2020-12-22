#include <bits/stdc++.h>
#define lli long long int
using namespace std;

// Complete the powerSum function below.
lli dp[1000][40][40];
lli recur(lli x,lli n,lli i)
{
    lli p=pow(i,n);

    if(dp[x][n][i]!=-1) return dp[x][n][i];
    if(p>x) return 0;
    else if(x==p) return 1;

    return recur(x,n,i+1)+recur(x-p,n,i+1);
}

lli powerSum(lli X, lli N) {
    memset(dp,-1,sizeof(dp));
    return recur(X,N,1);
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    lli X;
    cin >> X;
    

    lli N;
    cin >> N;
    

    lli result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

    return 0;
}
