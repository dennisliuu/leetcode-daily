#include <iostream>

using namespace std;

class Solution {
	public:
	    	bool judgeCircle(string moves) {
			int cx = 0, cy = 0;
			for (char & m : moves) {
				if (m == 'U') ++cy;
				else if (m == 'D') --cy;
				else if (m == 'R')++ cx;
				else --cx;
			}
			return cx==0 && cy==0;
    		}
};

int main(void) {
	Solution s;
	cout << s.judgeCircle("LL") << endl;

	return 0;
}
