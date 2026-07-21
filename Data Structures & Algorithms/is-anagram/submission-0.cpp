class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        for(char x: s)
        freq1[x]++;
        for(char y: t)
        freq2[y]++;
        if(freq1==freq2)
        return true;

        return false;



        
    }
};
