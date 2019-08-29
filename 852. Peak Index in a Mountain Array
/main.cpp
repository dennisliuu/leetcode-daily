#include <vector>
#include <iostream>

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& A) {
        int out = 0;
        for (int i= 0 ; i<A.size() ; i++){
            if (A[i]> A[i+1]){
                out = i; 
                break;
            }
                
        }
      return out; 
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> vect = {0,1,2,0};
    
    std::cout << s.peakIndexInMountainArray(vect) << std::endl;
    
    return 0;
}
