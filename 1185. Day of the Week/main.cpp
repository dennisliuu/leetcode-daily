#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string dayOfTheWeek(int day, int month, int year)
    {
        static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
        year -= month < 3;

        std::vector<std::string> w = {"Sunday", "Monday", "Tuesday", "Wednesday","Thursday", "Friday", "Saturday"};
        return w[( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7];
    }
};

int main()
{
    Solution s;
    cout << s.dayOfTheWeek(31, 8, 2019);

    return 0;
}