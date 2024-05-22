class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> str;
            recurse(str,"",0,0,n);
        return str;
    }

    void recurse(vector<string> &result, string current, int open_count, int close_count, int lim) {
        if (current.length() == lim * 2) {
            result.push_back(current);
            return;
        }
        if (open_count < lim) {
            recurse(result, current + "(", open_count + 1, close_count, lim);
        }
        if (close_count < open_count) {
            recurse(result, current + ")", open_count, close_count + 1, lim);
        }
    }
};