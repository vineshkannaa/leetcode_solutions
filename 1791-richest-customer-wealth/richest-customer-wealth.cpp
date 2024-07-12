class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsofar=-2147483646;
        for(int i=0; i<accounts.size(); i++){
            int tempsum=0;
            for(int j=0; j<accounts[0].size(); j++ ){
                tempsum+=accounts[i][j];
            }
            maxsofar=max(tempsum, maxsofar);
        }
        return maxsofar;
    }
};