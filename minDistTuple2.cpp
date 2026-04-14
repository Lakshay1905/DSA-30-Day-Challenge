class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        int mini = INT_MAX;

        for(auto it : mp){
            vector<int> v = it.second;
            int n = v.size();

            if(n >= 3){
                for(int i = 0; i + 2 < n; i++){
                    int val = 2 * (v[i + 2] - v[i]);
                    mini = min(mini, val);
                }
            }
        }

        if(mini== INT_MAX){
            return -1;
        }
        return mini;
    }
};