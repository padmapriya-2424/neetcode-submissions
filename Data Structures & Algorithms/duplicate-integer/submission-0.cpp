class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s1;
        for(int i:nums)
        {
            s1.insert(i);
        }
        if(s1.size()==nums.size())
        {
            return false;
        }
        return true;
    }
};