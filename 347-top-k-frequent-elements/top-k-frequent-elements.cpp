class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : mp)
        {
            int n=it.first;
            int f=it.second;
            pq.push({f,n});
        }
        for(int i=0;i<k;i++)
        {
            int a=pq.top().second;
            res.push_back(a);
            pq.pop();
        }
        return res;
    }
};