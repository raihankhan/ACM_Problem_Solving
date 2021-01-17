class Solution {
// O(N)
public:
    int lengthOfLongestSubstring(string s) {
        int maxilen=0,len=0,l=0,r,k,p;
        int cnt[257]={0};
        
        for(r=0;r<s.length();r++)
        {
            k=s[r];
            cnt[k]++;
            while(cnt[k]>1)
            {
                p=s[l];
                cnt[p]--;
                l++;
            }
            maxilen=max(maxilen,r-l+1);
        }
        
        return maxilen;
    }
};
