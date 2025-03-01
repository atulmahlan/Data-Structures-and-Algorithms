// QUESTION: You are given a string s consisting of lowercase English letters, and an integer k. 
// Your task is to convert the string into an integer by a special process, and then transform it by summing its digits repeatedly k times. More specifically, perform the following steps:

// 1. Convert s into an integer by replacing each letter with its position in the alphabet (i.e. replace 'a' with 1, 'b' with 2, ..., 'z' with 26).
// 2. Transform the integer by replacing it with the sum of its digits.
// 3. Repeat the transform operation (step 2) k times in total.

// For example, if s = "zbax" and k = 2, then the resulting integer would be 8 by the following operations:
// 1. Convert: "zbax" ➝ "(26)(2)(1)(24)" ➝ "262124" ➝ 262124
// 2. Transform #1: 262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17
// 3. Transform #2: 17 ➝ 1 + 7 ➝ 8

// Return the resulting integer after performing the operations described above.

class Solution {
public:
    int sumofDigits(int num) {
        int sum = 0;

        while(num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

public:
    int getLucky(string s, int k) {
        string numStr = "";

        for(int c = 0 ; c < s.length() ; c++)
        {
            numStr += to_string(s[c] - 'a' + 1);
        }

        int num = 0;

        for(int digit = 0 ; digit < numStr.length() ; digit++)
        {
            num += numStr[digit] - '0';
        }

        while(k > 1)
        {
            num = sumofDigits(num);
            k--;
        }

        return num;
    }
};
