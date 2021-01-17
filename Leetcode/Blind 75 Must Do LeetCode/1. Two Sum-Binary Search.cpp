class Solution {
// O(NlogN) 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector< pair<int,int> > v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            int rest=target-v[i].first;
            int l=i+1,r=v.size()-1,mid;
            while(l<=r)
            {
                
                mid=(l+r)>>1;
                if(v[mid].first==rest)
                {
                    return {v[i].second,v[mid].second};
                }
                else if(v[mid].first<rest)
                {
                    l=mid+1;
                }
                else r=mid-1;
            }
            
        }
        return {};
    }
};
