class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> pos = {};
        int index = 0, n = 0;
        int len_arr = arr.size();
        for (auto i : arr) {
            if (i == 0) 
                pos.push_back(index);
            index++;
        }
        for (auto i : pos) {
            arr.insert(arr.begin()+i+n, 0);
            n++;
        }
        for (int i = 0; i < n ; i++) {
            arr.pop_back();
        }
    }
};
