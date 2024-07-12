class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int tgt = int(target);
        char answer = letters[0];
        for(int i = 0; i < letters.size(); i++){
            int temp = int(letters[i]);
            if(temp > tgt) {
                answer = letters[i];
                break;
            }
        }
        return answer;
    }
};
