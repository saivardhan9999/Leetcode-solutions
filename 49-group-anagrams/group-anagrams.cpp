class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            string word=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(word);
        }
        vector<vector<string>> res;
        for(auto it : mp)
        {
            res.push_back(it.second);
        }
        return res;
    }
};