#include <vector>
#include <iostream>
#include <numeric> // std::accumulate

using namespace std;

class Solution
{
public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
    {
        if (start > destination)
        {
            start = start + destination;
            destination = start - destination;
            start = start - destination;
        }
        int Sum = std::accumulate(std::begin(distance), std::end(distance), 0);
        int pathSum = std::accumulate(std::begin(distance) + start, std::begin(distance) + destination, 0);
        return min(pathSum, Sum - pathSum);
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v = {3, 6, 7, 2, 9, 10, 7, 16, 11};
    cout << s.distanceBetweenBusStops(v, 6, 2) << endl;
    return 0;
}
