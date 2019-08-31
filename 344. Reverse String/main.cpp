#include <iostream>
#include <vector>
#include <algorithm>    // std::reverse

// class Solution {
// public:
//     void reverseString(std::vector<char>& s) {
//         return std::reverse(s.begin(),s.end());
//     }
// };

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int start=0,end=s.size()-1;
        while(start<end){
            std::swap(s[start++],s[end--]);
        }
    }
};