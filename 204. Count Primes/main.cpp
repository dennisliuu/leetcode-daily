#include <iostream>

class Solution
{
public:
    int countPrimes(int n)
    {
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (isPrime(i))
                count++;
        }
        return count;
    }

private:
    bool isPrime(int num)
    {
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    std::cout << s.countPrimes(10) << std::endl;
    return 0;
}
