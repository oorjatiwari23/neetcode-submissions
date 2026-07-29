class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> smp;
        unordered_map<char,int> tmp;
        for(char x: s)
        {
            smp[x]++;
        }
        for(char y: t)
        {
            tmp[y]++;
        }
        for(auto it:tmp)
        {
            if(smp[it.first]!=it.second)
            return it.first;
        }
        
    }
};