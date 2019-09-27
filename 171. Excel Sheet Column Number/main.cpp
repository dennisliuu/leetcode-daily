class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0, power = 0;
        reverse(s.begin(), s.end());
        for (auto& c : s) {
            ans += (c - 'A' + 1)* pow(26, power);
            power++;
        }
        return ans;
    }
};