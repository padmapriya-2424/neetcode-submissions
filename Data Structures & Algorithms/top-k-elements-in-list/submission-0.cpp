class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        priority_queue<pair<int,int>> maxfre;
        map<int,int> count;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(auto it:count)
        {
            int x=it.first;
            int y=it.second;
            maxfre.push({y,x});
        }
        for(int i=0;i<k;i++)
        {
            pair<int,int> a=maxfre.top();
            maxfre.pop();
            res.push_back(a.second);
        }
        return res;
    }
};
