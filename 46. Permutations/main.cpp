class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        std::sort (nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        do {
            temp = {};
            for (int i = 0; i < nums.size(); i++)
                temp.push_back(nums[i]);
            ans.push_back(temp);
        } while ( std::next_permutation(nums.begin(),nums.end()) );
        return ans;
    }
};