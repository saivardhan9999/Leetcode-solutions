class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        vector<int> x(26,0);
        vector<int> y(26,0);
        for(char c : s1) x[c-'a']++;
        int left=0;
        for(int right=0;right<s2.length();right++)
        {
            y[s2[right]-'a']++;
            if(right-left+1>s1.length())
            {
                y[s2[left]-'a']--;
                left++;
            }
            if(x==y) return true;
        }
        return false;
    }
};