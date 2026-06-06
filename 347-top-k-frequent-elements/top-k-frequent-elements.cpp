class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;
        priority_queue<pair<int,int>> pq;
        for(auto it : mp)
        {
            int num = it.first;
            int freq = it.second;
            pq.push({freq,num});
        }
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            int a = pq.top().second;
            res.push_back(a);
            pq.pop();
        }
        return res;
    }
};