class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<bool>& used,vector<int>nums,vector<int>&subset){
        if(subset.size()==nums.size()){
            res.push_back(subset);
            return;
        }for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            used[i]=true;
            subset.push_back(nums[i]);
            solve(used,nums,subset);
            subset.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> subset;
        vector<bool> used(nums.size(), false);
        solve(used,nums,subset);
        return res;
    }
};
