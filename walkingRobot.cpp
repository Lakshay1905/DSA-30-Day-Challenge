class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<long long> blocked;
        
        for(auto p : obstacles){
            blocked.insert((long long)p[0]*100000 + p[1]);
        }
        
        int cx = 0, cy = 0, dir = 0, best = 0;
        
        int vx[4] = {0, 1, 0, -1};
        int vy[4] = {1, 0, -1, 0};
        
        for(auto c : commands){
            if(c == -2) dir = (dir + 3) % 4;
            else if(c == -1) dir = (dir + 1) % 4;
            else{
                for(int step = 0; step < c; step++){
                    int tx = cx + vx[dir];
                    int ty = cy + vy[dir];
                    
                    if(blocked.count((long long)tx*100000 + ty)) break;
                    
                    cx = tx;
                    cy = ty;
                    
                    best = max(best, cx*cx + cy*cy);
                }
            }
        }
        
        return best;
    }
};