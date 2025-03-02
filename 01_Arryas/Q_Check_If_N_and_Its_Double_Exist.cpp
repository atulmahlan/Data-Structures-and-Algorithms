// QUESTION: Given an array arr of integers, check if there exist two indices i and j such that :
// 1. i != j
// 2. 0 <= i, j < arr.length
// 3. arr[i] == 2 * arr[j]

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;
        
        for (int num : arr) {
            if (seen.count(2 * num) || (num % 2 == 0 && seen.count(num / 2))) {
                return true;
            }
            seen.insert(num);
        }
        
        return false;
    }
};
