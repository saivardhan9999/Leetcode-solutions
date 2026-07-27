class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i = nums2.size() -1 ; i >=0; i--){
            int n = nums2[i];

            while(!st.empty()  && n > st.top()){
                st.pop();
            }
            if(st.empty()){
                mp[n] = -1;
            }else{
                mp[n] = st.top();
            }
            st.push(n);
        }
        vector<int> ans;
        for(int i = 0 ; i < nums1.size(); i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};