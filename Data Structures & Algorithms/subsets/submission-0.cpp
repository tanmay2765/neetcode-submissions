class Solution {
public:
    vector<vector<int>> res;
    void solve(int idx,vector<int>& nums,vector<int>& subset){
        if(idx==nums.size()){
            res.push_back(subset);
            return;
        }
        solve(idx+1,nums,subset);
        subset.push_back(nums[idx]);
        solve(idx+1,nums,subset);
        subset.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        solve(0,nums,subset);
        return res;
    }
};
