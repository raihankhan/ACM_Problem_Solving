// O(Log(n)) solution

class Solution {
public:
    int dp[1001][1001];
    int cnt;
    int solve(int taken,int copied,int n)
    {
        cnt++;
        if(taken==n) return 0;
        if(taken>n) return 1e7;
        
        if(dp[taken][copied]!=0) return dp[taken][copied];
        
        int a,b;
        
        if(copied==0) return 2+solve(taken+taken,taken,n);
        
        a=1+solve(taken+copied,copied,n);
        b=2+solve(taken+taken,taken,n);
        
        return dp[taken][copied]=min(a,b);
    }
    int minSteps(int n) {
        return solve(1,0,n);
        cout << cnt << endl;
    }
};
