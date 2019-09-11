#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        vector<char> seq1 = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'U', 'I', 'O', 'P', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        vector<char> seq2 = {'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        vector<char> seq3 = {'Z', 'X', 'C', 'V', 'B', 'N', 'M', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};

        vector<string> result;

        bool isseq1 = true;
        bool isseq2 = true;
        bool isseq3 = true;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                if (isseq1 == true)
                {
                    if (find(seq1.begin(), seq1.end(), words[i][j]) == seq1.end())
                    {
                        isseq1 = false;
                    }
                }

                if (isseq2 == true)
                {
                    if (find(seq2.begin(), seq2.end(), words[i][j]) == seq2.end())
                    {
                        isseq2 = false;
                    }
                }

                if (isseq3 == true)
                {
                    if (find(seq3.begin(), seq3.end(), words[i][j]) == seq3.end())
                    {
                        isseq3 = false;
                    }
                }
            }

            if (isseq1 || isseq2 || isseq3)
            {
                result.push_back(words[i]);
            }

            isseq1 = true;
            isseq2 = true;
            isseq3 = true;
        }

        return result;
    }
};