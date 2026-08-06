class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        
        int longest=0;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);

        }

        for(int x:s)
        {
            if(!s.count(x-1))
            {
                int num=x;
                int count=1;
                while(s.count(num+1))
                {
                    num++;
                    count++;
                    
                }
                longest=max(longest,count);
            }
        }
        return longest;
        
    }
};
