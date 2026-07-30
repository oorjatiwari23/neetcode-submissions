class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>rmp;
        unordered_map<char,int>mmp;
        for(char x: ransomNote)
        rmp[x]++;
        for(char y: magazine)
        mmp[y]++;

        for(auto it:rmp)
        {
            if(!mmp.count(it.first))
            return false;
            if(it.second>mmp[it.first] )
            return false;
                
            
            
           
        }
        return true;
        
    }
};