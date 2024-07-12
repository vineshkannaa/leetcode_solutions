class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer;

        answer = matrix;
        for(int i=0; i<matrix[0].size(); i++){
            int maxsofar=-2147483646;
            for(int j=0; j<matrix.size(); j++){
                maxsofar = max(maxsofar, answer[j][i]);
            }
            for(int j=0; j<matrix.size(); j++){
                if(answer[j][i]==-1) answer[j][i]=maxsofar;
            }
            
        }
        return answer;
    }
};