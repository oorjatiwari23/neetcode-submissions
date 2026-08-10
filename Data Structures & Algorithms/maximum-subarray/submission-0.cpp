class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=nums[0];
        int maxend=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxend=max(nums[i],maxend+nums[i]);
            curr=max(curr,maxend);
        }
        return curr;
    }
};
