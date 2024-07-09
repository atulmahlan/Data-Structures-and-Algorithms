// QUESTION: A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.
// For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
// Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.


class Solution {
public:
    string sortSentence(string s) {
        map<int, std::string> indexWordMap;

        istringstream iss(s);     // This is used to split the input string by spaces.
        string word;
        while (iss >> word)       // This reads each word from the input string.
        {
            int lastIndex = word.length() - 1;

            int index = word[lastIndex] - '0';
            string actualWord = word.substr(0, lastIndex);

            indexWordMap[index] = actualWord;
        }

        string actualString;
        for (const auto& indexWord : indexWordMap) 
        {
            actualString += indexWord.second + " ";
        }

        if (!actualString.empty()) 
        {
            actualString.pop_back();      // The trailing space is removed by this.
        }

        return actualString;
    }
};
