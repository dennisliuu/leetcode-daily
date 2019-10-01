class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> magazine_map;
        for(auto &m_note : magazine)
            magazine_map[m_note] ++;
        for (auto &r_note : ransomNote) {
            if (magazine_map[r_note] == 0) return false;
            else magazine_map[r_note] --;
        }
        return true;
    }
};