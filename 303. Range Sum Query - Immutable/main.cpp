class NumArray {
public:
    vector<int> nums_;
    NumArray(vector<int>& nums) {
        // nums_ = move(nums);
        copy(nums.begin(), nums.end(), back_inserter(nums_)); 
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
         for (int k = i; k <= j; k++) {
            sum += nums_[k];
        }
         return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */