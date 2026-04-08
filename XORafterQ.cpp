class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long MOD=1e9+7;
        for(int i = 0; i<queries.size();i++){
            long l=queries[i][0];
            long r = queries[i][1];
            long k = queries[i][2];
            long v = queries[i][3];

            while(l<=r){
                nums[l]=(nums[l]*v) % MOD;
                l+=k;
            }
        }
        int ans=nums[0];
        for(int i=1; i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};