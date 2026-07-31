class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> v;
        vector<int>ans;
        for(int x:nums)
        mp[x]++;

        for (auto it:mp)
        {
            
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        for (int i = v.size() - 1; i >= 0 && ans.size() < k; i--)
{
    ans.push_back(v[i].second);
}
        
    return ans;
    }
};
