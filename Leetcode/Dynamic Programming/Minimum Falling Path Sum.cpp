class Solution {
public:
   
    int minFallingPathSum(vector<vector<int>>& A) {
        int n=A.size();
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0)
                {
                    if(j+1<n)
                        A[i][j]=min(A[i][j]+A[i+1][j],A[i][j]+A[i+1][j+1]);
                    else A[i][j]+=A[i+1][j];
                }
                else if(j==n-1)
                {
                    A[i][j]=min(A[i][j]+A[i+1][j],A[i][j]+A[i+1][j-1]);
                }
                else
                {
                    A[i][j]=min(A[i][j]+A[i+1][j],min(A[i][j]+A[i+1][j+1],A[i][j]+A[i+1][j-1]));
                }
                    
            }
        }
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++) ans=min(ans,A[0][i]);
        
        return ans;
    }
};
