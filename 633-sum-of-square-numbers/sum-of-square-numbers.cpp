class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0){
            return true;
        }
        for(int i=0; i<sqrt(c);++i){
            int b = c - (i*i);
            int j = sqrt(b);
            if(b==j*j){
                return true;
            }
        }

        return false;
    }
};