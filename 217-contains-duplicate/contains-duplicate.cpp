class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i:nums){
            if(count.find(i)!=count.end()){
                return true;
            }
            count[i]=1;
        }
        return false;
    }
};