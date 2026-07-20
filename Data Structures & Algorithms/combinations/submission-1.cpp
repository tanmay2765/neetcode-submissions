class Solution {
public:
    vector<vector<int>> res;
    void solve(int idx,int n,int k,vector<int>& subset){
        if(subset.size()==k){
            res.push_back(subset);
            return;
        }for(int i=idx;i<=n;i++){
            subset.push_back(i);
            solve(i+1,n,k,subset);
            subset.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> subset;
        solve(1,n,k,subset);
        return res;
    }
};