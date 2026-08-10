class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alp(26,0);
        for(char c:s)
        {
            alp[c-'a']++;
        }
        for(char c:t)
        {
            alp[c-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(alp[i]!=0)return false;
        }
        return true;
    }
};
