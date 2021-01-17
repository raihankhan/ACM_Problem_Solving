class Solution {
// O(n^2)
public:
    string longestPalindrome(string s) {
        int n=s.length();
        bool memo[n][n];
        memset(memo,false,sizeof(memo));
        int soli=0,solj=0,maxlen=0;
        if(n<=1) return s;
        
        for(int len=1;len<=n;len++)
        {
            for(int i=0;i+len-1<n;i++)
            {
                int j=i+len-1;
                if(i==j) memo[i][j]=1;
                else if(i+1==j and s[i]==s[j]) memo[i][j]=1;
                else if(s[i]==s[j] and memo[i+1][j-1]) memo[i][j]=1;
                
                if(memo[i][j] and len>maxlen)
                {
                    maxlen=len;
                    soli=i,solj=j;
                }
            }
        }
        
        string ret="";
        for(int i=soli;i<=solj;i++)
            ret+=s[i];
        
        return ret;
        
    }
};
