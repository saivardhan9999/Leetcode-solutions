class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(char c : s) mp[c]++;
        int length=0;
        bool x=false;
        for(auto it : mp)
        {
            if(it.second%2==0) length+=it.second;
            else
            {
                length+=it.second-1;
                x=true;
            }
        }
        if(x) length++;
        return length;
    }
};