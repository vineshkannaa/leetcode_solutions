class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        int n = words.size();
        
        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = 0; j < words[i].size(); j++) {
                if (x == words[i][j]) {
                    flag = true;
                    break;
                }
            }
            if (flag == true) {
                result.push_back(i);
            }
        }

        return result;
    }
};
