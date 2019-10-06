#include <vector>
#include <algorithm>
#include <iostream>

class Solution
{
public:
    std::vector<int> arraysIntersection(std::vector<int> &arr1, std::vector<int> &arr2, std::vector<int> &arr3)
    {
        std::vector<int> v(arr1.size() + arr2.size());
        std::vector<int> v2(v.size() + arr3.size());
        std::vector<int>::iterator it;

        it = std::set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), v.begin());
        it = std::set_intersection(v.begin(), v.end(), arr3.begin(), arr3.end(), v2.begin());

        v2.resize(it - v2.begin());
        return v2;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {1, 2, 5, 7, 9};
    std::vector<int> arr3 = {1, 3, 4, 5, 8};

    std::vector<int> ans = s.arraysIntersection(arr1, arr2, arr3);
    for (auto i : ans)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    
    return 0;
}
