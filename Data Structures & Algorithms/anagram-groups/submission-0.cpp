class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> res;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            map[key].push_back(s);
        }for(auto &p:map){
            res.push_back(p.second);
        }return res;
    }
};
