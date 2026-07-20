class Solution {
public:
    vector<vector<int>> res;
    void solve(int idx,vector<int>& nums,int k,vector<int>& subset){
        if(subset.size()==k){
            res.push_back(subset);
            return;
        }if(idx==nums.size())return;
        solve(idx+1,nums,k,subset);
        subset.push_back(nums[idx]);
        solve(idx+1,nums,k,subset);
        subset.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums,subset;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }solve(0,nums,k,subset);
        return res;
    }
};