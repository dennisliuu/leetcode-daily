#include <iostream>
#include <string>

class Solution {
public:
    std::string toLowerCase(std::string str) {
        for (char & c : str) 
            if (c>='A' && c<= 'Z') 
                c+= 32;
        return str;
    }
};

int main(int argc, char const *argv[])
{
	Solution s;
	std::cout << s.toLowerCase("HELLO") << std::endl;
	return 0;
}
