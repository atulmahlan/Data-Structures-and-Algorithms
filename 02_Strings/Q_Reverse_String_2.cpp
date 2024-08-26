// QUESTION: Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.
// If there are fewer than k characters left, reverse all of them. 
// If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and leave the other as original.


class Solution {
public:
    string reverseStr(string s, int k) {
        int left = 0;
        int right = min(k , (int)s.length());

        while(left < s.length())
        {
            reverse(s.begin() + left , s.begin() + right);
            left += 2*k;
            right = min(left + k , (int)s.length());
        }
        return s;
    }
};
