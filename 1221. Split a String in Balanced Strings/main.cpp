class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0, r = 0, l = 0;
        for (auto &c : s) {
            if (c == 'R') r++;
            if (c == 'L') l++;
            if (r == l) res ++;
        }
        return res;
    }
};