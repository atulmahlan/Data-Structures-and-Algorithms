// QUESTION: Given an array of strings strs, group the anagrams together. You can return the answer in any order.


class Solution {
private:
    string getFrequencyString(const string& str) {
        vector<int> freq(26, 0);
        for (char c : str) {
            freq[c - 'a']++;
        }
        
        string frequencyString;
        for (int i = 0; i < 26; ++i) {
            frequencyString += string(1, 'a' + i) + to_string(freq[i]);
        }
        return frequencyString;
    }

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.empty()) return {};

        unordered_map<string, vector<string>> frequencyStringMap;

        for (const string& str : strs) {
            string frequencyString = getFrequencyString(str);
            frequencyStringMap[frequencyString].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& kv : frequencyStringMap) {
            result.push_back(kv.second);
        }

        return result;
    }
};
