class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'M') {
                total += 1000;
            } else if (s[i] == 'D') {
                total += 500;
            } else if (s[i] == 'C') {
                if (i + 1 < s.length() && s[i + 1] == 'M') {
                    total += 900;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'D') {
                    total += 400;
                    i++;
                } else {
                    total += 100;
                }
            } else if (s[i] == 'L') {
                total += 50;
            } else if (s[i] == 'X') {
                if (i + 1 < s.length() && s[i + 1] == 'L') {
                    total += 40;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'C') {
                    total += 90;
                    i++;
                } else {
                    total += 10;
                }
            } else if (s[i] == 'V') {
                total += 5;
            } else if (s[i] == 'I') {
                if (i + 1 < s.length() && s[i + 1] == 'V') {
                    total += 4;
                    i++;
                } else if (i + 1 < s.length() && s[i + 1] == 'X') {
                    total += 9;
                    i++;
                } else {
                    total += 1;
                }
            }
        }
        return total;
    }
};
