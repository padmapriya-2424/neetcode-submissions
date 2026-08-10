class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<vector<int>,vector<string>> fre;
        for(int i=0;i<strs.size();i++)
        {
            vector<int> c(26,0);
            string st=strs[i];
            for(int j=0;j<strs[i].size();j++)
            {
                c[st[j]-'a']++;
            }
            fre[c].push_back(strs[i]);
        }
        for(auto it:fre)
        {
            res.push_back(it.second);
        }
        return res;
        }
};
