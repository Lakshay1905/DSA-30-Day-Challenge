class Solution {
public:
    int closestTarget(vector<string>& words, string target, int start) {
        int n = words.size();
        int mini = INT_MAX;

        for(int i = 0; i < n; i++){
            if(words[i] == target){
                int diff = abs(i - start);
                mini = min(mini, min(diff, n - diff));
            }
        }

        if(mini == INT_MAX ){
            return -1 ;
        }
        return mini;
    }
};