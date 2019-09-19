class Solution {
public:
    vector<int> diStringMatch(string S) {
        int D = S.size();
        int I = 0;
        vector<int> ans = {};
        for (char& ch : S) {
            if (ch == 'D') {
                ans.push_back(D);
                D--;
            }
            else {
                ans.push_back(I);
                I++;
            }
        }
        ans.push_back(I);
        return ans;
    }
};