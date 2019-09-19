#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int row = A.size();
        int col = A[0].size();
        for (int i = 0; i < row; i++) {
            reverse(std::begin(A[i]), std::end(A[i])); 
            for (int j = 0; j < col; j++) {
                A[i][j] ^= 1;
            }
        }
        return A;
    }
};