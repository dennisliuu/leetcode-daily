class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> gain;
        for (auto o : ops) {
            if (o == "C")
                gain.pop_back();
            else if (o == "D")
                gain.push_back((int)gain.back()*2);
            else if (o == "+")
                gain.push_back((int)gain.back() + (int)gain[gain.size()-2]);
            else {
                gain.push_back(stoi(o));
            }
        }
        return accumulate(gain.begin(), gain.end(), 0);
    }
};