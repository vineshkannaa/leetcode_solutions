class Solution {
public:
    int strStr(string haystack, string needle) {
        int haylen = haystack.length();
        int needlen = needle.length();
        
        if (needlen == 0) return 0; 
        
        for (int i = 0; i <= haylen - needlen; i++) {
            int j;
            for (j = 0; j < needlen; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == needlen) {
                return i; 
            }
        }
        
        return -1;
    }
};
