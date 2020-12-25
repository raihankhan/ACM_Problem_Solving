//O(n^3) Solution
class Solution {
public:
   
    int minFallingPathSum(vector<vector<int>>& A) {
        int n=A.size();
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                bool taken=0;
                int temp=A[i][j];
                for(int k=0;k<n;k++)
                {
                    if(j==k) continue;
                    if(taken)
                        A[i][j]=min(A[i][j],temp+A[i+1][k]);
                    else
                    {
                        A[i][j]=temp+A[i+1][k];
                        taken=1;
                    }
                }    
            }
        }
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++) ans=min(ans,A[0][i]);
        
        return ans;
    }
};

//O(n^2) Solution

class Solution {
public:
   
    int minFallingPathSum(vector<vector<int>>& A) {
        int n=A.size();
        
        int mini1=INT_MAX,mini2=INT_MAX;
        
        for(int i=n-1;i>=0;i--)
        {
            int rmini1=INT_MAX,rmini2=INT_MAX;
            for(int j=0;j<n;j++)
            {
                if(i+1<n)
                {
                    if(A[i+1][j]==mini1) A[i][j]+=mini2;
                    else A[i][j]+=mini1;
                }
                
                 if(A[i][j]<=rmini1)
                 {
                      rmini2=rmini1;
                      rmini1=A[i][j];
                 }
                 else rmini2=min(rmini2,A[i][j]);
            }
            
            mini1=rmini1;
            mini2=rmini2;
        }
        
        return mini1;
    }
};
