class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        //1. use an unordered map (edges?)
        //2. max occurances of edges calculated goes into the hash map (so no need to calculate for each index instead only calc
        // for number of edges after each index) LESSSgo?

        unordered_map<int,int> map;
        int finall = 0;
        for(int i=0; i<wall.size(); i++){
            int len=0;
            for(int j=0; j<wall[i].size()-1; j++){
                len += wall[i][j];
                map[len]= map[len]+1;
                if( finall<map[len]){
                    finall=map[len];
                }
            }
        }
        return wall.size() - finall;

    }
};