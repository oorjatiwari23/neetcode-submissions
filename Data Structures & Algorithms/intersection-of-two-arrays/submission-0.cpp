class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int x:nums1)
        mp[x]++;

        for(int i=0;i<nums2.size();i++)
        {
            if(mp.count(nums2[i]))
            v.push_back(nums2[i]);
            mp.erase(nums2[i]);
        }
        return v;

        
    }
};