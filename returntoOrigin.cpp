class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;

        for(auto it : moves){
            if(it == 'U'){
                x+=1;
            }
            else if(it == 'D'){
                x-=1;
            }
            else if(it == 'L'){
                y-=1;
            }
            else if(it == 'R'){
                y+=1;
            }
        }
        return x==0 && y==0;
    }
};