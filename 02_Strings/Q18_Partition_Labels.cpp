// QUESTION: You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part.
// Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.
// Return a list of integers representing the size of these parts.

class Solution {
public:
    vector<int> partitionLabels(string str) {
        vector<int> partitions;

        for (int i = 0; i < str.length(); )
        {
            int startIndex = i;
            int endIndex = str.find_last_of(str[startIndex]);

            for (int s = startIndex + 1; s <= endIndex - 1; s++) 
            {
                int lastIndexOfNextChar = str.find_last_of(str[s]);

                if (lastIndexOfNextChar > endIndex) 
                {
                    endIndex = lastIndexOfNextChar;
                }
            }

            partitions.push_back(endIndex - startIndex + 1);
            i = endIndex + 1;
        }

        return partitions;
    }
};
